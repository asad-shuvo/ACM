/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        Employee *ob=employees[0];
     //   cout<<ob->id<<endl;
        // cout<<employees[0].id<<endl;
        queue<int>q;
        q.push(id);
        int sum=0;
        while(!q.empty()){
            int d=q.front();
            q.pop();
            for(int i=0;i<employees.size();i++){
                if(employees[i]->id==d){
                    sum+=employees[i]->importance;
                    for(int j=0;j<employees[i]->subordinates.size();j++){
                        q.push(employees[i]->subordinates[j]);
                    }
                    break;
                }
            }
        }
        return sum;
    }
};
