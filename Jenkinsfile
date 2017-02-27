
stage('Prep') {
    echo 'Prep'
    node {
    	deleteDir()
        checkout scm
    }
}

stage('Build') {
    echo 'Build'
    node {
        sh 'cmake .'
        sh 'make'
    }
}

stage('Test') {
    echo 'Test'
    node {
        sh './helloworld'
    }
}

