
stage('Checkout') {
    properties properties: [ pipelineTriggers([githubPush()]) ]

    node {
        deleteDir()
        dir('helloworld') {
            checkout scm
        }
        dir('msggen') {
	    git 'https://github.com/vallon/msggen'
        }
    }
}

stage('Configure') {
    echo 'Configure'
    node {
        dir('helloworld') {
            sh 'cmake .'
        }
    }
}

stage('Build') {
    echo 'Build'
    node {
        dir('helloworld') {
            sh 'make'
        }
    }
}

stage('Test') {
    echo 'Test'
    node {
        dir('helloworld') {
            sh './helloworld'
        }
    }
}

