pipeline {
  agent {label 'docker-enabled'}

  stages {
    stage('Build') {
      steps {
        sh 'docker run --rm -v /etc/passwd:/etc/passwd -v /etc/group:/etc/group --user $(id -u):$(id -g) -v $(pwd):/work -w /work library/gcc make link'
      }
    }
    stage('Test') {
      steps {
        sh 'docker run --rm -v /etc/passwd:/etc/passwd -v /etc/group:/etc/group --user $(id -u):$(id -g) -v $(pwd):/work -w /work library/gcc make test'
      }
    }
  }
}
