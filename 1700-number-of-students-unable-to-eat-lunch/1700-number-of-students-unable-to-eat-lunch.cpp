class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int stu_count=students.size(),csand=0,ssand=0;
        for(int i=0;i<students.size();i++){
            if(students[i]==0)csand++;
            else
                ssand++;
        }
        for(int i=0;i<sandwiches.size();i++){
           if(sandwiches[i]==0){
               if(csand>0){
                   csand--;
                   stu_count--;
               }
               else{return stu_count;}
           } 
            else if(sandwiches[i]==1){
                if(ssand>0){
                    ssand--;
                   stu_count--;
                }
                else{return stu_count;}
            }
        }
        return stu_count;
    }
};