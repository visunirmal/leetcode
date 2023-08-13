class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
          ArrayList<Integer> arr=new ArrayList<>();
        Arrays.sort(nums);
        int n=nums.length;
        int comp; // comp variable will compare from 1 to N

        for(comp=1;comp<nums[0];comp++) //contains values smaller than first element of array
        {
            arr.add(comp);
        }

        for(int i=0;i<n;i++) 
        {
           if(comp==nums[i])
           {
               continue;
           }
           else 
           {
               comp++;
               if(comp!=nums[i])
               {
                   arr.add(comp);
               }
               i--;
           }
        }

        for(comp=comp+1;comp<=n;comp++) //remaining values smaller than or equal to  N
        {
            arr.add(comp);
        }
        return arr;
    }
        
    }