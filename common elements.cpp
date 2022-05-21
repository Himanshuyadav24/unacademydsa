//  vector <int> temp;
//             vector <int> ans;
            
//             int i = 0, j = 0;
//             while(i<n1 && j<n2)
//             {
//                 if(A[i]==B[j])
//                 {
//                     temp.push_back(A[i]);
//                     i++;
//                     j++;
//                     while(A[i]==A[i-1] && i>0)
//                     i++;
//                     while(B[j]==B[j-1] && j>0)
//                     j++;
//                 }
//                 else if(A[i]>B[j])
//                 j++;
//                 else
//                 i++;
                
//             }
//             if(temp.size()==0)
//             {
//                 ans.push_back(-1);
//                 return ans;
//             }
            
//              i = 0 , j = 0;
//             while(i<n3 && j<temp.size())
//             {
//                 if(C[i]==temp[j])
//                 {
//                     ans.push_back(C[i]);
//                     i++;
//                     j++;
//                     while(C[i]==C[i-1] && i>0)
//                     i++;
//                     while(temp[j]==temp[j-1] && j>0)
//                     j++;
//                 }
//                 else if(C[i]>temp[j])
//                 j++;
//                 else
//                 i++;
//             }
//             if(ans.size()==0)  ans.push_back(-1);
//             return ans;
//         }
// };