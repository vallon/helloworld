
stage('Prep') {
    echo 'Prep'
    checkout scm
    node {
        sh 'echo prep me'
        sh 'find .'
    }
}

stage('Build') {
    echo 'Build'
    node {
        sh 'echo build me'
    }
}

stage('Test') {
    echo 'Test'
    node {
        sh 'echo test me'
    }
}

