/* groovy */

def clean(Closure fn) {
    deleteDir();
    try {
        fn();
    } finally {
        deleteDir();
    }
}

properties([ pipelineTriggers([githubPush()]) ]);

node('osprey || toucan') {
    clean {
        stage('Checkout') {
            dir('helloworld') {
                checkout(scm);
            }
            dir('msggen') {
                git('https://github.com/vallon/msggen');
            }
        }
        stage('Configure') {
            dir('helloworld') {
                sh 'cmake .';
            }
        }
        stage('Build') {
            dir('helloworld') {
                sh 'make';
            }
        }
        stage('Test') {
            dir('helloworld') {
                sh './helloworld';
            }
        }
    }
}

