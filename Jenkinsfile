
stage('Checkout') {
    properties properties: [ pipelineTriggers([githubPush(), pollSCM('')]) ]

    node {
        deleteDir()
        dir('helloworld') {
            checkout scm
        }
        dir('msggen') {
            checkout([
                $class: 'GitSCM',
                branches: [[name: '*/master']],
                doGenerateSubmoduleConfigurations: false,
                extensions: [],
                submoduleCfg: [],
                userRemoteConfigs: [
                    [
                        credentialsId: '49f4b3d6-92d5-4b89-bcd1-507ccd68b6fb',
                        url: 'https://github.com/vallon/msggen'
                    ]
                ]
            ])
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

