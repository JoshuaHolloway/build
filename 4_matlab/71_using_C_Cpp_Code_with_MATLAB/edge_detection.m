function y = edge_detection(x, threshold) %#codegen
    y = edge(x, 'canny', threshold);
end