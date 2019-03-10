function B = func(A, tol) %#codegen
    A = sort(A);
    %coder.varsize('B', [1 100], [0 1]);
    B = A(1);
    k = 1;
    for i = 2:length(A)
        if abs(A(k) - A(i)) > tol
            B = [B A(i)];
            k = i;
        end
    end
