pipeline{
  agent none
    stages{
      stage('Distributed build'){
        parallel{
          stage('Build on master'){
            agent{label 'master'}
              steps{
          sh 'sleep 5;echo "This is build stage1"'
                    }
              }
      stage('Build on slave'){
        agent{label 'Slave1'}
        steps{
         sh 'sleep 15; echo "This is build stage2"'
                   }
             }
        }
      }
    }
}
    
       
