pipeline{
  agent none
    stages{
      stage('Distributed build- build and test'){
        parallel{
          stage('Build'){
            agent{label 'master'}
              steps{
          sh 'sleep 5;echo "This is Build stage"'
                    }
              }
      stage('Test'){
        agent{label 'Slave1'}
        steps{
         sh 'sleep 15; echo "This is Test stage"'
                   }
             }
        }
      }
    }
}
    
       
