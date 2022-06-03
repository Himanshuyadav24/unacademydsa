// class Solution {
// public:
//     string reverseWords(string s) {
        
// //  put the i at the last position of the given string
//     int i = s.length()-1;
        
// //  create a empty string you gonna return in the end
//         string ans = "";
        
// //  traverse the given string
//         while(i>=0)
//         {
// //  ignore the trailing spaces
//             while(i>=0 && s[i]==' ')i--;
//             int j = i;
            
// //  for leading spaces break from the loop
//             if(i<0)break;
            
// //             for string traverse
//             while(i>=0 && s[i]!=' ')i--;
//             if(ans.empty())
//             {
//             ans = ans.append(s.substr(i+1,j-i));
//             }
//             else
//             {
//              ans = ans.append(" " + s.substr(i+1,j-i)); 
//             }
//         }
//         return ans;
//     }
// };