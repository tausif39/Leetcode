
class Solution
{
public:
  bool isValid(string s)
  {

    stack<char> st;

    // st.push(s[0]);

    for (int i = 0; i < s.size(); i++)
    {
      
      if (st.empty() == false)
      {
        

        if (st.top() == '(')
        {
          if (s[i] == ')')
          {
            st.pop();
          }

          else
          {
            st.push(s[i]);
          }
        }

       else if (st.top() == '[')
        {
          if (s[i] == ']')
          {
            st.pop();
          }
          else
          {
            st.push(s[i]);
          }
        }

     else   if (st.top() == '{')
        {
          if (s[i] == '}')
          {
            st.pop();
          }
          else
          {
            st.push(s[i]);
          }
        }
      }

      

      else
      {
        st.push(s[i]);
      }
    }

    if (st.empty())
      return true;

    return false;
  }
};