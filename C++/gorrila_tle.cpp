
        /*
        // put into groups that can be removed together
        // minimize groups
        // groups are contigous seperated by lower numbers
        // for each number store group (what information about the group. indexes? l and r of range. )
        // we need to store the amount of members of each group, and an arr of the locations (and thus the range)
        vector<int> numArr;
        unordered_map<int, int> numNums;
        // O(n) 10^5
        for (int i : arr){
            if (numNums.count(i)) { 
                (numNums[i] += 1);
            } else {
                numNums[i] = 1;
                numArr.push_back(i);


            }
        }
        vector<int> amtNums;
        // O(n) 10^5
        for (int i : numArr){amtNums.push_back(numNums[i]);}
        // n log n 5 * 10 ^ 5
        sort(amtNums.begin(), amtNums.end());
        int groupsRmed = 0;
        for (int i : amtNums){
            k -= i;
            if (k < 0){
                break;
            } else {
                groupsRmed++;


            }
        }
        int res = (size(numArr) - groupsRmed != 0) ? (size(numArr) - groupsRmed) : 1;
        cout << res << "\n";
        






*/
