//Complete the function
       if(A.length() != B.length()){
           return false;
       }else{
		   // sort the strings and see if they are equal to be considered an Anagram
           char a[] = A.toLowerCase().toCharArray();
           char b[] = B.toLowerCase().toCharArray();
           Arrays.sort(a);
           Arrays.sort(b);
           String sortedA = String.valueOf(a);
           String sortedB = String.valueOf(b);
           if(sortedA.equals(sortedB)){
               return true;
           }
           
        
       }
       return false;