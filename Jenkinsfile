pipeline {
  agent {
    docker {
      image 'library/gcc:latest'
    }
  }

  stages {
    stage('Submodule') {
      steps {
        sh 'git submodule update --init --recursive'
      }
    }
    stage('Build') {
      steps {
        sh 'make test'
      }
    }
    stage('Test') {
      steps {
        sh 'make run-tests'
      }
    }
  }
}
