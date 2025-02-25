pipeline{
  agent{label 'Slave1'}
    stages{
      stage('Build'){
        steps{
          sh 'sleep 5;echo "This is build stage"'
                    }
              }
      stage('Test'){
        steps{
         sh 'sleep 15; echo "This is test stage"'
                   }
             }
      stage('Deploy'){
        steps{
          sh 'sleep 20;echo "This is deploy stage"'
                     }
              }
           }
         }    
