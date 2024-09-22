# TCS

- 1 Sum of Unique Elements
-

## TIPS

- PAIR RETURN

```
pair<int,int> maxSubarraySum(int arr[],int n){

   //code body
   return{a,b}

}
int main(){
    //body
    auto c= maxSubarraySum(arr,n);
    cout<<c.first<<c.second;
}
```

- 2D ARRAY [NOTE: DO BY VECTOR]

```
void PrintPath(vector<vector<int>>&arr,string path,int x,int y,int n,int m,int &count){
    //CODE BODY
}
int main(){
     vector<vector<int>>arr(n,vector<int>(m));

     //NORMAL 2D ARRAY I/P LOOPS

     PrintPath(arr,path,x,y,m-1,n-1,count);
}

```

- MAP METHOD

```
using namespace std;
int UniqueSum(int n,int arr[]){
	//MAKE MAP
    unordered_map<int,int>mpp;
	int sum=0;
	for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    //TRAVERSE MAP -> NO CHANGES IN MAP SINCE NO "&" ITERATOR PRESENT
    for(auto it:mpp){
        cout<<"First: "<<it.first<<"->"<<"Second: "<<+it.second<<endl;
    }

	//PRINT MAP ->HERE WE CAN DO CHANGES IN MAP VALUE SINCE "&" ITERATOR PRESENT
	for(auto &ab: mpp){
		sum+=ab.first;
	}
	return sum;
}
```

## NUMBER->BITS

```
 bitset<32>bit(n);
```

- MSB

  - `while(n>0){n=n>>1;}`

- Bit Mask

```
bitset<32>mask;
mask=~(~0<<pos);//let pos=2 ~0<<Till_bit_mask_index=1100
```

## BITS->NO

```
int ans=(int)(bit.to_ulong());
```

## BITS->STRING

```
to_string()
```

## Sort in O(n)

- Dutch national flag
- Two pass -1 count all nos -2place all no in array

## Find Max Value in the map

```
map::iterator itr;
for (itr = some_map.begin();
itr != some_map.end();
++itr)
{
// operations
}
```

## Find Max key in the map

- the std::map::rbegin() function that returns a reverse iterator pointing to the last element in the map
  `auto maxElement = myMap.rbegin();`
