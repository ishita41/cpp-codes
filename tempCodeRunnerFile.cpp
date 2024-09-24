if(mp.size()>k){
            while(mp.size()>k){
                mp[s[l]]--;
                if(mp.size()==0)
                mp.erase(s[l]);
                l++;
            }