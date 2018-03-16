pipeline {
  agent { label 'docker-enabled' }

  stages {
    stage('Submodule') {
      steps {
        sh 'git submodule update --init --recursive'
      }
    }
    stage('Build') {
      steps {
        sh 'docker run --rm -v /etc/passwd:/etc/passwd -v /etc/group:/etc/group --user $(id -u):$(id -g) --volumes-from=$(hostname) -w "${WORKSPACE}" library/gcc make test'
      }
    }
    stage('Test') {
      steps {
        sh 'docker run --rm -v /etc/passwd:/etc/passwd -v /etc/group:/etc/group --user $(id -u):$(id -g) --volumes-from=$(hostname) -w "${WORKSPACE}" library/gcc make run-tests'
      }
    }
  }
}
