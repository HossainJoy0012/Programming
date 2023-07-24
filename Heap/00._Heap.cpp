/*

Heap is a concept, where we imagine a array as a complete binary tree.

Complete binary tree is a binary tree where all the nodes will be present till the level which is before the last level 
and the last level will start to fill from the left side.

To get the indeices of the child nodes from the parent node,
2 * (Index of the parent node) + 1 = Index of the left child node
2 * (Index of the parent node) + 2 = Index of the right child node

To get the index of the parent node from thr child nodes,
(int)((Index of the child node - 1) / 2) = Index of the parent node

In the max heap the parent node will be larger and if it is a min heap the parent node will be smaller than the childrens.

*/