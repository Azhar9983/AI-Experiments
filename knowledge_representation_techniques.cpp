Aim: Study of various knowledge representation techniques.
There are mainly four ways of knowledge representation which are given as follows:
1.	Logical Representation
2.	Semantic Network Representation
3.	Frame Representation
4.	Production Rules
1. Logical Representation
Logical representation is a language with some concrete rules which deals with propositions and has no ambiguity in representation. Logical representation means drawing a conclusion based on various conditions. This representation lays down some important communication rules. It consists of precisely defined syntax and semantics which supports the sound inference. Each sentence can be translated into logics using syntax and semantics. 
Syntax: 
5.	Syntaxes are the rules which decide how we can construct legal sentences in the logic.
6.	It determines which symbol we can use in knowledge representation.
7.	How to write those symbols.
2. Semantic Network Representation
Semantic networks are alternative of predicate logic for knowledge representation. In Semantic networks, we can represent our knowledge in the form of graphical networks. This network consists of nodes representing objects and arcs which describe the relationship between those objects. Semantic networks can categorize the object in different forms and can also link those objects. Semantic networks are easy to understand and can be easily extended. 
This representation consist of mainly two types of relations:
1.	IS-A relation (Inheritance)
2.	Kind-of-relation
Example: Following are some statements which we need to represent in the form of nodes and arcs.
Statements:
1.	Jerry is a cat.
2.	Jerry is a mammal
3.	Jerry is owned by Priya. 
4.	Jerry is brown colored.
5.	All Mammals are animal.
 
3. Frame Representation
A frame is a record like structure which consists of a collection of attributes and its values to describe an entity in the world. Frames are the AI data structure which divides knowledge into substructures by representing stereotypes situations. It consists of a collection of slots and slot values. These slots may be of any type and sizes. Slots have names and values which are called facets. 
Facets: The various aspects of a slot is known as Facets. Facets are features of frames which enable us to put constraints on the frames. Example: IF-NEEDED facts are called when data of any particular slot is needed. A frame may consist of any number of slots, and a slot may include any number of facets and facets may have any number of values. A frame is also known as slot-filter knowledge representation in artificial intelligence. 
4. Production Rules
Production rules system consist of (condition, action) pairs which mean, "If condition then action". It has mainly three parts:
•	The set of production rules
•	Working Memory
•	The recognize-act-cycle
In production rules agent checks for the condition and if the condition exists then production rule fires and corresponding action is carried out. The condition part of the rule determines which rule may be applied to a problem. And the action part carries out the associated problem-solving steps. This complete process is called a recognize-act cycle.
The working memory contains the description of the current state of problems-solving and rule can write knowledge to the working memory. This knowledge match and may fire other rules.
Example: 
•	IF (at bus stop AND bus arrives) THEN action (get into the bus)
•	IF (on the bus AND paid AND empty seat) THEN action (sit down).
•	IF (on bus AND unpaid) THEN action (pay charges).
