class Solution {
public:
    int romanToInt(string s) {

        int sum = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'I')
            {
                if(s[i+1] == 'V')
                sum += 4;

                else if(s[i+1] == 'X')
                sum += 9;

                else
                sum += 1;
            }

            else if(s[i] == 'X')
            {
                if(i != 0)
                {
                    if(s[i-1] == 'I')
                    sum += 0;

                    else if(s[i+1] == 'L')
                    sum += 40;

                    else if(s[i+1] == 'C')
                    sum += 90;

                    else
                    sum += 10;
                }

                else if(s[i+1] == 'L')
                sum += 40;

                else if(s[i+1] == 'C')
                sum += 90;

                else
                sum += 10;
            }

            else if(s[i] == 'C')
            {
                if(i != 0)
                {
                    if(s[i-1] == 'X')
                    sum += 0;

                    else if(s[i+1] == 'D')
                    sum += 400;

                    else if(s[i+1] == 'M')
                    sum += 900;

                    else
                    sum += 100;
                }

                else if(s[i+1] == 'D')
                sum += 400;

                else if(s[i+1] == 'M')
                sum += 900;

                else
                sum += 100;
            }

            else if(s[i] == 'V')
            {
                if(i != 0)
                {
                    if(s[i-1] == 'I')
                    sum += 0;
                    
                    else
                    sum += 5;

                }
                
                else
                sum += 5;
            }

            else if(s[i] == 'L')
            {
                if(i != 0)
                {
                    if(s[i-1] == 'X')
                    sum += 0;

                    else
                    sum += 50;
                }

                else
                sum += 50;
            }


            else if(s[i] == 'D')
            {
                if(i != 0)
                {
                    if(s[i-1] == 'C')
                    sum += 0;   

                    else sum += 500;
                }

                else
                sum += 500;
            }

            else if(s[i] == 'M')
            {
                if(i != 0)
                {
                    if(s[i-1] == 'C')
                    sum += 0;

                    else
                    sum += 1000;
                }

                else
                sum += 1000;
            }

            cout << sum << "\n";
        }

        return sum;
    }
};


/*
TIME OPTIMAL:

class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        for(int i=0; i<s.size(); i++) {
            if(s[i] == 'I' && s[i+1] == 'V') {
                num += 4;
                i++;
            } else if(s[i] == 'I' && s[i+1] == 'X') {
                num += 9;
                i++;
            } else if(s[i] == 'X' && s[i+1] == 'L') {
                num += 40;
                i++;
            } else if(s[i] == 'X' && s[i+1] == 'C') {
                num += 90;
                i++;
            } else if(s[i] == 'C' && s[i+1] == 'D') {
                num += 400;
                i++;
            } else if(s[i] == 'C' && s[i+1] == 'M') {
                num += 900;
                i++;
            } else if(s[i] == 'I') {
                num++;
            } else if(s[i] == 'V') {
                num += 5;
            } else if(s[i] == 'X') {
                num += 10;
            } else if(s[i] == 'L') {
                num += 50;
            } else if(s[i] == 'C') {
                num += 100;
            } else if(s[i] == 'D') {
                num += 500;
            } else if(s[i] == 'M') {
                num += 1000;
            } else {
                num += 0;
            }
        }
        
        return num;
    }
};

*/