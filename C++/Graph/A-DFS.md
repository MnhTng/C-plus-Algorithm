<!-- Ma tran ke -->
DFS(int u){
    cout << u << " ";
    visited[u] = true;

    for(int i = 1; i <= n; i++){
        if(a[u][i] == 1){
            if(!visited[i])
                DFS(i);
        }
    }
}

<!-- Danh sach canh -->
DFS(int u){
    cout << u << " ";
    visited[u] = true;

    for(auto ite : ds){
        if(ite.first == u){
            if(!visited[ite.second])
                DFS(ite.second);
        }
        if(ite.second == u){
            if(!visited[ite.first])
                DFS(ite.first);
        }
    }
}

<!-- Danh sach ke -->
DFS(int u){
    cout << u << " ";
    visited[u] = true;

    for(int x : ke[u]){
        if(!visited[x])
            DFS(x);
    }
}
