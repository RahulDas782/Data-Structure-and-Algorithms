void printCircuit(vector< vector<int> > adj) 
{ 
    // adj represents the adjacency list of 
    // the directed graph 
    // edge_count represents the number of edges 
    // emerging from a vertex 
    vector<int> edge_count(adj.size()*adj[0].size(),0); 
  
    for (int i=0; i<adj.size(); i++) 
    { 
        //find the count of edges to keep track 
        //of unused edges 
        edge_count[i] = adj[i].size(); 
    } 
  
    if (!adj.size()) 
        return; //empty graph 
  
    // Maintain a stack to keep vertices 
    stack<int> curr_path; 
  
    // vector to store final circuit 
    vector<int> circuit; 
  
    // start from any vertex 
    curr_path.push(0); 
    int curr_v = 0; // Current vertex 
  
    while (!curr_path.empty()) 
    { 
        // If there's remaining edge 
        if (edge_count[curr_v]) 
        { 
            // Push the vertex 
            curr_path.push(curr_v); 
  
            // Find the next vertex using an edge 
            int next_v = adj[curr_v].back(); 
  
            // and remove that edge 
            edge_count[curr_v]--; 
            adj[curr_v].pop_back(); 
  
            // Move to next vertex 
            curr_v = next_v; 
        } 
  
        // back-track to find remaining circuit 
        else
        { 
            circuit.push_back(curr_v); 
  
            // Back-tracking 
            curr_v = curr_path.top(); 
            curr_path.pop(); 
        } 
    } 
  
    // we've got the circuit, now print it in reverse 
    for (int i=circuit.size()-1; i>=0; i--) 
    { 
        cout << circuit[i]; 
        if (i) 
           cout<<" -> "; 
    } 
} 
