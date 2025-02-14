class ProductOfNumbers {
    vector<long long> products;
    long long currProduct=1;
    long long totalProduct=1;
public:
    ProductOfNumbers() {
      
    }
    
    void add(int num) {
        if(num==0){
            products.erase(products.begin(), products.end());
            currProduct=1;
        }
        else{
            currProduct*=1LL*num;
            products.push_back(currProduct);
        }      
    }
    
    int getProduct(int k) {
        if(k>products.size()){
            return 0;
        }
        else if(k==products.size()){
            return currProduct;
        }

        long long beforeProduct=products[products.size() - k - 1];
        return currProduct/beforeProduct; 
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */