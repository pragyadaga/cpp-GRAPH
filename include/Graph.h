#ifndef GRAPH_H
#define GRAPH_H

template <typename T>
class Graph
{
public:
	//Graph constructor for terminal input
	Graph( int verticesCount );
	//Graph constructor for file input
	Graph( std::string fileName );
	//copy constructor
	Graph( const Graph& rhs );
	//move constructor
	Graph( const Graph&& rhs );
	//copy assignment
	Graph& operator=( const Graph& rhs );
	//move assignment
	Graph& operator=( const Graph&& rhs );
	void addEdge( int start, int end , T cost = new T() );
	void removeEdge( int start , int end );
	void changeEdgeCost( int start , int end , T new_cost );
	T getEdgeCost( int start , int end );
	~Graph();
	class DFSIterator
	{

	};
	class BFSIterator
	{

	};
	DFSIterator DFSbegin();
	DFSIterator DFSend();
	BFSIterator BFSbegin();
	BFSIterator BFSend();
private:
	T **adjacencyMatrix_ ;
	int verticesCount_ ;
};

#endif