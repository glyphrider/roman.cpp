pipeline {
  agent { node {
    label 'docker-enabled'
    checkout([
        $class: 'GitSCM',
        branches: scm.branches,
        doGenerateSubmoduleConfigurations: true,
        extensions: scm.extensions + [[$class: 'SubmoduleOption', parentCredentials: true]],
        userRemoteConfigs: scm.userRemoteConfigs
    ])
  }}

  stages {
    stage('Build') {
      steps {
        sh 'docker run --rm -v /etc/passwd:/etc/passwd -v /etc/group:/etc/group --user $(id -u):$(id -g) --volumes-from=$(hostname) -w "${WORKSPACE}" library/gcc make link'
      }
    }
    stage('Test') {
      steps {
        sh 'docker run --rm -v /etc/passwd:/etc/passwd -v /etc/group:/etc/group --user $(id -u):$(id -g) --volumes-from=$(hostname) -w "${WORKSPACE}" library/gcc make test'
      }
    }
  }
}
