function Count = findLen(arr,threshold)
    arr = [arr arr];
    d1 = find(arr > threshold);
    d2 = find(arr < -threshold);
    if(max(numel(d1),numel(d2))<24)
        Count = 0;
    else
        if(numel(d1)<numel(d2))
            d1 = find(arr >= -threshold);
        else
            d2 = find(arr <= threshold);
        end
        if(isempty(d1))
            Count =16;
        elseif (isempty(d2))
            Count=16;
        else
            m =0;
            for i =1:(min(numel(d1),numel(d2))-1)
                gapd2 = d2(i+1) - d2(i)-1;
                gapd1 = d1(i+1) - d1(i)-1;
                if(m < max(gapd1,gapd2))
                    m = max(gapd1,gapd2);
                end
            end
            Count = m;
        end
    end
end