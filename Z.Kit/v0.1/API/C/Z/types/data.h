/* Z Kit C API - types/data.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2016 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU Lesser General Public License v3. */

#ifndef __Z_types_data_H__
#define __Z_types_data_H__

#include <Z/macros/node.h>

/* MARK: - Arrays */

typedef struct {
	ZPointer data;
	zsize	 size;
} ZArray;

typedef struct {
	void* data;
	zsize size;
	zsize block_size;
} ZBlockArray;

/* MARK: - Abstract nodes */

Z_DEFINE_LIST_NODE	 (ZListNode,,	   );
Z_DEFINE_CHAIN_NODE	 (ZChainNode,,	   );
Z_DEFINE_TREE_NODE	 (ZTreeNode,,	   );
Z_DEFINE_BINARY_TREE_NODE(ZBinaryTreeNode,,);
Z_DEFINE_RB_TREE_NODE	 (ZRBTreeNode,,	   );
Z_DEFINE_QUADTREE_NODE	 (ZQuadtreeNode,,  );
Z_DEFINE_OCTREE_NODE	 (ZOctreeNode,,	   );
Z_DEFINE_ARRAY_TREE_NODE (ZArrayTreeNode,, );

/* MARK: - Nodes */

Z_DEFINE_LIST_NODE	 (ZListNodeWithData,,	    ZPointer data;);
Z_DEFINE_CHAIN_NODE	 (ZChainNodeWithData,,	    ZPointer data;);
Z_DEFINE_TREE_NODE	 (ZTreeNodeWithData,,	    ZPointer data;);
Z_DEFINE_BINARY_TREE_NODE(ZBinaryTreeNodeWithData,, ZPointer data;);
Z_DEFINE_RB_TREE_NODE	 (ZRBTreeNodeWithData,,	    ZPointer data;);
Z_DEFINE_QUADTREE_NODE	 (ZQuadtreeNodeWithData,,   ZPointer data;);
Z_DEFINE_OCTREE_NODE	 (ZOctreeNodeWithData,,	    ZPointer data;);
Z_DEFINE_ARRAY_TREE_NODE (ZArrayTreeNodeWithData,,  ZPointer data;);

/* MARK: - Node containers */

typedef struct {
	ZListNode* first;
	zsize	   size;
	ZListNode* last;
} ZList;	

typedef struct {
	ZChainNode* first;
	zsize	    size;
	ZChainNode* last;
} ZChain;

typedef struct {
} ZHash;

#endif /* __Z_types_data_H__ */
