int start = 0, end = arr_size -1;
    
    if(arr[start]==search || arr[end]==search){return 1;}
    while (start != end)
    {   int mid = (start+end)/2;
        if(search > arr[mid]){ start = mid+1;}
        else if(search < arr[mid]){ end = mid-1;}
        else{
            return 1;
        }
    }
    return -1;