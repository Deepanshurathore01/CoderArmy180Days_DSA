bool isPossible(vector<int>& target) {
        //max heap
        priority_queue<int> p;
    long long sum = 0; // using long long to prevent integer overflow
    for (int i = 0; i < target.size(); i++) {
        p.push(target[i]);
        sum += target[i];
    }

    while (p.top() != 1) {
        int MaxElem = p.top();
        p.pop();
        long long Resum = sum - MaxElem;

        // Edge cases 
        if (Resum <= 0 || Resum >= MaxElem)
            return false;
        //   changes will occur 
        int Element = MaxElem % Resum; // corrected assignment
        if(Element == 0)
        {
            if(Resum  !=1)
            return 0;
            else 
            return 1;
        }
        sum = Resum + Element;
        p.push(Element);
    }
    return true;
    }