pipeline {
  agent {
    docker {
      image 'library/gcc:latest'
    }
  }

  stages {
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
