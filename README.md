<img src="https://github.com/jumezurike/backend-master-lokdonSKI/blob/master/Howitworks_steps.png" width="100%" height=50% align=center>

# Lattice-Face Key Infrastructure (LFKI) for Quantum Resistant Computing
LokDon security research project:
Josiah Johnson Umezurike | September 12th 2018

[![](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)]
(https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=access_token$sandbox$h47crhcnt8mmszv3$7a12c158be18fa1e3e8e341296a28860)

*******************************************************************************************************************************!
# Contents
*******************************************************************************************************************************!

# Abstract
# Introduction
# Objective
# An overview of current cryptography
-Asymmetric
-Symmetric
# The problem
# The solution
# Technical Specification
-Infrastructure of LFK
-Architecture
# Advantages (NEW APPROACH or AXIOMS)
# Basic anaylysis of QC & LFKI
# Conclusion
# Reference

[   ]
*******************************************************************************************************************************!
# Introduction
*******************************************************************************************************************************!

This article is an observation from over 20 years research work. We are not mathematicians. The sole intent is to solve the common problem of our time from practitioner’ perspective. It is agreed on all ground the havoc quantum computing will bring to the modern cryptography. Consequently, it is sufficiently relevant to be prepared pre and post quantum. The understanding of Euler, Hamiltonian cycle and lattice basis paved the way in drawing the relationship needed to harmonize the open knight tours (OKT) in the genre of Hamilton’ path. The similarities under study shows the pervasiveness of Hamilton’s path in grid (n x n) formation. In absence of any back track; It does enumerate all points in Euclidean space if and only if n=>5. Hamilton’ cycle, when applied to grid or chessboard, it clearly proves that it is indeed a hard NP as the grid become richly connected. When this exercise extended to the operation of AES (Rijndael) which commonly lies on 4 x 8 grid. It is possible to  expand the scope of AES to develop a 2048-Bit AES-hybrid using the bounded region between the edges and vertices of lattices. The result is a low-cost, high entropy, endpoint to endpoint cryptographic system for cloud, mobile and IoT devices (ECSMID). The reference specification is a category of hard NP problems closely related to numbered faces of a lattice basis or matrix. This cryptography shows the properties of both symmetric, asymmetric cryptography or public key infrastructure (PKE, KEM and DS).

# Abstract
In this paper we present a new idea by exploring a hybrid system designed to share symmetric and asymmetric properties. LFKI is code named, end-to-end cryptographic system for cloud, mobile, internet of things (IOT) and devices (ECSMID). Until now, there had not been much done on lattice faces as a hybrid cryptographic solution. Here in, we do not owe respect to only randomization reduction or deterministic reduction. We embrace a collective approach to defining the old age question of what problem is hard enough in NP to resist a quantum assailant. These biases, especially non-deterministic reduction is used to show that lattices are interesting hard problems within the set of NP Complete problems. Though the shortest vector problem (SVP) seems promising. It is nearly enough to facilitate and establish lattice basis an exception from the priori art [1]. The many configurations of their vertices seem to dismiss the wonderful properties of the dynamic faces that abound in various lattice constructs. The elements of these faces found in between regions bounded by the vertices and edges are of great interest to cryptography. When represented as numerical values serve as mathematical images of the lattice basis distribution. It is demonstrated that each vector representation has the potential to generate cryptographically secure number of keys. They follow a somewhat rigid rule; deterministic and yet a chaotic arrangement of the lattice vectors represented within a matrix of column (c) and rows (r), where (c=>16 and r=>16). A fitting rule is already available with the necessary mechanism to produce 1: n relationship for a plaintext against many ciphertext. This is found in Open/Knight Tour (O/KT) movements and can easily be modified to absorb larger lattice basis. Lattice face are ready made with properties that are closely related to the regular vectors of Euclidean space. 

# OBJECTIVE:
To show that there is a cryptographic formation following a lattice basis that fits into an ideal set of hard NP complete problems known to be resistant to quantum computing. A matrix  could be seen as a numerical image of a lattice basis. This brings about a low cost, pervasive and high entropy cipher which hybridizes and increases AES capacity to roughly 16, 10.7, 8 times. TThereby, resists post-quantum attacks and cancels the effects of pre and post-quantum breaches.

# An Overview of current cryptography:
The Frailty of PKI and AES: There are numerous talks about PKI. Ponemon institute, Gartner, IBM and many other reliable and prolific sources had mentioned their worries about the future of PKI as we know it. More so, PKI and AES are the dominant part of the mechanism securing the internet transactions of today. The banks, health, retail, government and all entities use these two technology. 

They are supposed to secure and make private each communication whenever you access any secure website. It is a scientific knowledge that PKI is based on mathematics: Where in, (N = p * q ), Phi(N) = (p-1)*(q-1) where (e, N) is the public keys and (d, N) is the private key. There is a condition e { integer; 1<e<phi(N); & co-primes (sharing no factors) with N & phi(N)}. Choose d such that, { e*d mod phi(N) = 1}:

Asymmetric:

Encrypted data ( c) = msg^e mod N

Decrypted data  (msg) = c^d mod N

AES will suffer a similarly if not the same fate as RSA. The future of quantum computer will certainly vilify it. We don't really have to wait into the future anyway. People are already saving petabytes of data in the cloud. These are going to be disclosed or exposed regardless the sooner a quantum computer becomes available. Many shool of thought agree to this statement.

Symmetric:

Let Ct = cipher template length; where the length is the same as the keys used to perform wholistic encryption of the message. The message is added to extended key K of period D which could be an 64 bits passphrase or more. Note that a modulo arithemetic is used herein. It is a common knowledge that AES is one form of the family of cryptography. The strength of AES is synomymous to the irreducibility of polynomials of 8th degree. Symmetric key cryptography (SKC) uses a secret key: They are commonly known as passwords or passphrases and individually driven. It is interesting to note that the key used to perform the actual encryption in AES sometimes are derived from the password via a key derivation mechanism reduced to Pseudo Random Number Generation by generators (PRNG). The block sizes of AES are defined ( 128bits, 192bits and 256bits). These and many other reasons add to their weaknesses before quantum computing. PRNG will generate AES keys of 16, 24 and 32 bytes to match the block sizes respectively. If the message doesn't fit the block it is the padded with IV so that it will fit the given block.

ECSMID proposes the use of seeds in social security numbers, drivers license number and phone numbers. It is recommended to use 10-15+ digit numbers arranged in a particular order or pick vectors on the matrix which in turn generates 680 digit numbers from each position. We will talk more about this on another paper.

Encrypted data (c) = (msg, D): (msg xor D) mod Ct

Decrypted data (msg) = (c, D): (c xor D) mod Ct


# The Problem:

If anyone can obtain the factors of the large number N with d (public key) any message will be decrypted. At the time of writing it is known that RSA is cracked. You should also note that Quantum computing has the potentials to solve the math and/or crack these large primes (N) in a short period of time according to Shor' Algorithm [4]. The time to perform the feat is usually said to be in polynomial time. In that case the RSA math show earlier, will no longer be a hard problem of a non-deterministic polynomial (NP). Qubit Is the stable standard signal state of a quantum computer: Again, the development of any quantum resistant algorithm could not afford to dismiss that notation typical to a qubit. In fact, one cannot neglect this idea and it cannot be over emphasized. This new qubit factor will also render any form of primitive cryptography useless. Another problem arises with the periodicity of lattice constructs. That begs the question. Is there a way to infuse the lattice with enough diffusion that will trigger more than translational changes in bases to bring about entropy and complexity so dynamic that it will be impossible to decipher the permutation of the basis transformation? 
Another serious problem that we must consider lies in the diffusion of AES. 
	Maximum distance separable (MDS) matrix introduced by Shannon Claude. – This is an identity matrix multiplication of A to produce a transformed matrix A; 
Let the matrix A    =  I/A , by joining identity matrix I to A.
	Ciphertext produced after the transformation of AES will have just a key to lead to a plaintext.

	The constant nature of the produced ciphertext will make it susceptible to byte-wise brute-force attacks.
	
According the substitution box (S-box) AES. This matrix is based on Rijndael finite field. An attack byte-wise will be successful today. One will have about 256 options or combinations for each byte in the 32byte arrangement of 256 bits block of AES. This means that in a 256 bits AES block size. Each sub block contains at the most 4 bytes or 32 bits. There are about 256 elements that could fit in one sub block at some point. This sub block will have about (256 s-box elements * 32 sub blocks) = 8192 combination of s-box elements or 32bits in it. Here 32 bits is equivalent to double words. Attacking bitwise could seem hopeless at first but going about the attack from byte perspective is another smart way achieving the same goal. A study of the diagram in fig. 1.0 will quickly show why attacking in byte-wise will be successful. It is much better to integrate the bits in a way to have more structure or see patterns in context. No secret is yet revealed to the polynocial adversary.

# SOLUTION TO THE PROBLEM:

Observation of the weaknesses of AES is the motivation behind this paper. A generous diffusion of semantically unsound messages was presented on behalf of AES. Going by the facts known about AES, such entropy cannot be accomplished in less than 14 rounds.  In fig. 1.0 notice the patterns in cipher key 1 and ciphertext 1. This is clear by a visual comparison to state, 32byte of structured messages. After the completion of the 14th round of AES, the resulting output is ciphertext1. Imagine using the S-Box directly with 256 elements where each matrix cell has the capability of 32bits or more. Lattices in their natural forms explain this abstraction in a new light. What then is a lattice?

A lattice is a set of all integral linear combinations of a given set of linearly independent points in Zn. For a basis B= {b1,...,bd} we denote the lattice it generates by L(B)={∑_(i=0)^d;xibi|xi∈Z}. Its rank is d, and the lattice is said to be of full rank if d=n. We identify the basis {b1,...,bd} with the n×d matrix containing b1,...,bd as columns, which enables us to write the shorter L(B) ={Bx|x∈Zd}. We use both the terms lattice point and lattice vector to describe the elements of a lattice basis.

A bit more time will be spent to introduce a new insight, towards quaint understanding of the shortest vector problem (SVP) of graph and path. While it is generally a consideration for being an NP-Hard problem. Randomization reduction without considering the face holding the basis is not enough to establish this as a case of NP-Hard problem [2]. That alone, could have been insufficient, or not good enough for quantum resistant encryption. Quantum computers are created to solve mathematical problems impossible to human mental speed. If a lattice basis must be retained as the frontier of modern cryptography; it must be an interesting one with some elegant properties that could be reduced to randomized, non-deterministic and deterministic biases. The intention is not to be overly critical.

There is a need to be proactive. One’s intent will be to find the right solution out of many; not to accept a solution that is not ripe. This is neither to wait for a solution to present itself. A potent lattice or ideal lattice and its image must be dynamic, with certain rigid rules, yet precise in decision making affirmative to the output. It must possess a distribution of probabilistic basis transformation with respect to the input and output (references are made to homomorphic encryption). -- The image of the lattice basis is a bounded matrix of interest. Let us look, once more into the relationship between encrypted and decrypted messages.
Asymmetric:
Encrypted data ( c ) = msge mod N
Decrypted data (msg) = cd mod N

It is clear from the above that an assailant only requires (d, N) to decrypt the message. Although, this does not apply to AES in mathematically sense. It quietly applies in byte-wise brute force of AES cipher key. 

Symmetric:
Let Ct = cipher template length; where the length is the same as the keys used to perform wholistic encryption of the message. The message is added to extended key K of period D which could be a 64 bits passphrase or more. Note that, a modulo arithmetic (XOR) is used herein. It is a common knowledge that AES is one form of the family of symmetric key cryptography. The strength of AES is synonymous to the irreducibility of polynomials of GF (28) or 8th degree. Symmetric key cryptography (SKC) uses a secret key: They are commonly known as passwords or passphrases and mostly manual driven. It is interesting to note that the key used to perform the actual encryption in AES sometimes are derived from these passwords via key derivation mechanism capable of a pseudo random number generator (PRNG). Password based key derivation function (PBKDF-2) is a good example.

The block sizes of AES are defined (128bits, 192bits and 256bits). These and many other reasons add to their weaknesses before quantum computing brute force attacks. PRNG will generate AES keys of 16, 24 and 32 bytes to match the block sizes respectively. If the message doesn't fit the block. It is then padded with IV so that it will fit the chosen block. Grover's algorithm is a quantum algorithm that finds with high probability the unique input to a black box function that produces a particular output of value, using just (O√N) evaluations of the function, where N is the size of the function's domain. Despite the effort vested in making AES secure, Grover is saying that it is probable half the time, to brute-force AES – 128 in 264 iterations. At least, one can unravel useful information that will lead to breaking of such scheme using quantum computer as a level playing field [3]. Here in, it is implied that the time is in quantum domain not polynomial time.

ECSMID proposes the use of seeds in social security numbers, driver license number and phone numbers. It is recommended to use 10-20 digits number arranged in one order. These numbers could be picked off vectors capable of becoming seeds for generating 680 digits number from each position on the matrix of n * n. We will talk more about this on another paper. These data are fed into the algorithm just like traditional classics and/or primitives of today.
Encrypted data (c) = (msg, D): (msg xor D) mod Ct
Decrypted data (msg) = (c, D): (c xor D) mod Ct. 
AES cipher substitution is directly derived from the substitution box (S-Box).
        
LFKI default matrix is 16*AES Fig. 2.0 
 
In Fig. 2.0 transformation of LFKI is completed via the natural occurrence of the lattice basis which under observation was noted analogous to OKT. One can say there is a similarity between the new protocol and AES. It is necessary to perform an exercise; a proof by visualization. This will help us to clearly establish without a doubt these claims. We will attempt to prove this abstract connection, not only to dispel doubts, but to deepen understanding of the trail modern cryptography could blaze. 
AES will suffer a similarly if not the same fate as RSA. If we do not apply this new mechanism. The future of quantum computer will certainly vilify it as well as any other contraption that does not comply to the dynamic reality of quantum computing model (QCM). We don't really have to wait into the future anyway. People are already saving petabytes of data in the cloud. In due time these could be disclosed as soon as quantum computer becomes available.

The minimum OKT necessary is 5 modes. Which simply translates to 5 different ciphers because the state is mapped or substituted to the knight template (KTn) to produce cipher templates (CTn). Structured messages are fed into the CT(n≤5). This method will accommodate future changes in code points and or code units. This will cover any future changes in the value sizes for types e.g word (WORD), double word (DWORD) and quantum word (QWORD).

Dynamic LFKI rounds Fig. 3.0

One of the major advantages observed in this paper is the fact that all other inputs in the circuit change except for the original message. This is a superior mechanism to surpass the challenges of quantum superposition.


# Technical Specification

To solve this problem from a technical perspective. It is imperative to draw an analogy from 3D shapes and their properties: Especially surface area (face) with breadth. A cuboid and other favorable dimensions of lattice basis will suffice for this development. Their properties like face, edges and vertices come in handy in unbounded and bounded space. You can get a flux from these properties as a result of vectors forming regular point in Euclidean space to enhance orientation as seen in lattice basis. In programmatical (code) terms, the idea of a matrix translation, transposition, transformation and substitution serves us well by forming an algorithm that covers lattice face key infrastructure and architecture. The face of lattice is commonly known to have points or vectors. Same goes to a matrix which is a quantitative representation of the lattice following certain strict rules. Therefore,
Total flux = ∫∫ f.n. dS [where n=1]. 
For our purpose the vector accent will not be needed. As scalar and vector delineation blurs in this region of SVP.
 
It means that any normal face in a shape will have a regular arrangement of point in Euclidean space (lattice). In this sense, following the elements of Galois' field; a matrix, mathematically can hold a lattice's contents: It is then noted that a lattice is only a form which can be reflected or translated. It will have points upon which forces can interact with it. This means that changes in choosing any of these points could change the matrix or the indices they bear. Below is the explanation of informational entropy.

Mathematically, this is expressed as H(C) = H (M|C), where H(M) is the informational entropy of the plaintext and H(M|C) is the conditional entropy of the plaintext given the ciphertext C. This implies that for every message M and corresponding ciphertext C, there must be at least one key K that binds them as a one-time pad. Mathematically speaking, this means K=>C=>M, where K, C, M denotes the distinct quantity of keys, ciphers and messages. In other words, if you need to be able to go from any plaintext in message space M to any cipher in cipher-space C (encryption) and from any cipher in cipher-space C to a plain text in message space M (decryption), you need at least |M|=|C| keys (all keys used with equal probability of 1/|K|) to ensure perfect secrecy [4].

It is also a standard practice to increase entropy by introducing composite of noise that permeates cipher text to the message sample. This could be achieved through modulo arithmetic by adding (XOR-ing) numerical values of passphrases or characters/special characters of the UTF-8 to the original messages. This will be fully explained later in this paper.
It is not a common knowledge to think of n = ꚙ for the equation presented by Galois field which essentially claims validity from Euclidean space. In programmatical (code) terms, the idea of a matrix translation, transposition, transformation and substitution serves us well by forming an algorithm that covers lattice face key infrastructure and architecture. Imagine that, this is in opposition to present day symmetric cryptography limiting scopes. 

In cryptography this means that those points can represent encryption and decryption components of data by satisfying GF(Pn) where n = ∞. The flux analogy herein depends on the surface area or orientation of the shape and forces (analysis) on them. The changing flux will be likened to the changing entropy at every turn of the algorithm (operation) owing to noise. The total flux is the product of the basis surface area, force and normal vectors. It is therefore possible to create a system of quantum immunity or resistance for the computation by replacing the vectors or points with characters of written words. Carefully chosen, are certain Unicode characters (i.e numbers). These formulate the standard state (ST): Subsequent generation of numbers from these face/s or seeds, following position P(n=0) - P(n=255) give rise to other sets (680 digits long) which could be used as cipher templates (CT). These points become numbers generated from the chaotic regularity found in faces of sky, snowflakes and silicon shapes (of course in 2D and 3D). 

The proposed algorithm comes with a powerful wrapping mechanism. That’s what makes it possible to be used as an exchange channel in the order of PKI public and private key. However, the school of thought defers from the popular opinion of Shortest Vector Problem (SVP) associated with the current lattice basis solution for cryptography. It is deduced from the research that open knight tour on a lattice face is a harder NP problem than the notion of SVP [5]. It cannot be solved by a quantum computer as long as the matrix is equal and greater than 16 for the columns as well as the rows: Given a matrix in column major (c,r), where a full rank is n x d. let n = d. It follows that { c>=16=<r }.

Note: The point closest to the chosen vector in SVP is orthogonal to all other points of interest. Finding the shortest path is the reason why this problem is of interest to cryptographers. This can never be deducted with certainty needed for integer mathematics. In lattice diagram ‘A’ fig. 1.0 the periodicity is very clear more so, all points sought to determine the shortest vector path are orthogonal.  Now, look very closely at lattice diagram ‘B’ fig. 2.0 The periodicity is also clear as the denoted impression in ‘A’. Although the bases are replaced by numbers just like a matrix would have within. When the numbers or the lattice bases are rearranged. A measure of difficulty arises in a way the problem becomes harder. The path to finding the shortest vector is no longer a linear one. Or is it? By Pythagoras it still is orthogonal respecting the base orientation.


![alt text](https://github.com/jumezurike/backend-master-lokdonSKI/blob/master/lattice_basis_demo.png)
[
								 Lattice base and matrix mix Fig. 1.0
					                                                                  ]
													  
A quantum Turing-machine with qubits orientation cannot sniff with certainty the positions of any legal open knight tour (OKT) on lattice face if the column (c) and the row (r) of the matrix are respectively of c=>16 and r=>16. If the position (Pn) that generates any set of cryptographically secure keys is unknown. If any set of keys generated from the matrix positions (Pn) follow n! where n=>256 is unknown. If comparing any two positions (P1) to (P2) on the lattice does not sniff out similar 680-digit long keys. Giving any input, it is said that the decision is impossible. Else, this is probably the hardest NP problem and will not resolve in polynomial-time. 


![alt text](https://github.com/jumezurike/backend-master-lokdonSKI/blob/master/COMPUTING_diff.png)

[
Computuatonal difficulty Fig.2.0
												        ]
													  
P ≠ NP and no one is sure of P = NP as it is not polynomial resolvable as earlier explained. In corollary, one can find a common NP-Hard problem which allows similar inputs as the OKT. In that case lattice basis are best suited for this reduction. Let X represent a lattice with regular point(s) in Euclidean space. 
It is agreed on equal footing that Hamiltonian path and open knight tour (OKT) are NP Complete [GJ79].
It is also a common knowledge that the Shortest Vector Problem (SVP) of a lattice-based cryptography is an NP-Hard problem. See Ajtai works for details. We will only try to reduce the hard problem to NP to prove that OKT is equally a hard problem. 

To prove that OKT is a hard NP problem: We only need to re-state the theorems. We will follow these steps:
1)	We deduce that X Ꞓ NP
This could be done in (i) or (ii)
i)	Polynomial time algorithm
ii)	Certificate and verifiers
2)	Reduce from known NP to the problem Y to X.
i.	If Y Ꞓ P the X Ꞓ P
ii.	If Y Ꞓ NP then X Ꞓ NP
X not in P unless P = NP
X is NP Complete if X Ꞓ NP & X is NP-Hard.
X is NP-Hard if every problem Y Ꞓ NP reduced to X
In this case inputs for X and Y are the same e.g coordinates, Vp or Pn. There will be no polynomial time algorithm for this proof. There is still a known problem 3DM (Ș) that is NP-Hard. If we can fit this problem into Y, then Y too is NP-Hard.

Proof: Y is NP-Hard
Given: 3D matching (variable gadget). Disjoint set x, y, z each size n given triples T ⊆ x *y*z. 
Is there a subset S⊆ T  such that every element, Ꞓx ∪ y ∪ z is in exactly one, s Ꞓ S Following a legal knight move OKT could only be on black dot (Y) or white square (N) at once? 
Method: Reduction of X to Y.
Three-dimensional matching (3DM) is NP Complete (Theorem). It is going to be a graphical prove. To make this easy, we set up an 8 by 8 matrix of black dots and white squares see the Fig 1.0 [C]. Let X represent the lattice basis (SVP) and Y represent OKT. Lattice basis (SVP) had been reduced to NP-Hard problem earlier [LLL82] [4]. Other precedence, 3-SAT was reduced to 3DM [GJ79].
To Prove:
Ș ≤p Y (If we could solve Ș we could solve Y).


![alt text](https://github.com/jumezurike/backend-master-lokdonSKI/blob/master/3DM_PROVE.png)

[
				3Dimensional matching reduction to OKT Fig. 3.0 
				 								           ]
													   
It is noted that in a deterministic Turing machine the answer is in affirmative for all inputs following the algorithm. You have the graph and the path to trace. This is quite analogous to the knight on a standard chase board. This same analogy is akin to non-deterministic mechanism given any input for decision of Y (black) or N (white). In this is more like a black dot or white square.

Following a certain strict rule which compels the knight or the input to touch on one of two (2) nodes if at the vertex (corner); four (4) nodes if on the edges and eight (8) nodes if at the middle of the board. It will trace the path to the nearest node no backtrack is allowed. This solution could go in a loop within a changing or expanding bases.

Open knight path traced from any corner of n x n graph will have 2n nodes of connection for 3 moves at the most. This is counted from n=0 position (Initial point) where n=0 is not really a move.

1.	The assumed position (Pn) on the corner is not counted as the first move such that no move is considered for initial position n=0. This means that the number of nodal connections at any chosen path will have 2n nodes; where 0=<n=<3. Only one node will be activated to move on to the next point of decision in the path. This is how the numbers are generated.
	
End of proof:
The open knight tours satisfy the condition of 3DM where in, a response of true (Y) or false (N) is entered to satisfy that only one element of the triplets that could be held in T.  If the path found for the legal knight is correct the clause must be black dot else white square. The path of a legal move, is a certificate which the machine must verify by counting black as a YES or white square as a NO. This method does not need to worry about garbage collection in the circuit.


Relying on the above claims and premises we submit this reference specification of an algorithm that combines symmetric and asymmetric cryptography using zero knowledge triangle flow and homomorphic encryption, standing strong enough to resist attacks from quantum computing. - Lattice-Face Key Infrastructure (LFKI)-- It recognizes and applies:

 a) public key encryption - 2048 bits AES-hybrid is used for encryption in wraps or modes
 
 b) key encapsulation - positions of key sets are encrypted with msg and separated
 
 c) digital signature - attributes are formed and stored as encrypts (HE properties are used)
 
 d) Hashes are not used in the classical sense for authentication: They only suffice for initial plain text integrity (digest) check
 
 e) CRC or checksum is not pushed here because of HE: If the hashes matches, original plaintext is the same as the current one.
      
The minimum modes for any encryption done is usually 5 or m5 for this system. However, you can encrypt anything (a message etc) from M1 to Mnth. This could be applied in telecommunications, IT, aeronautics, litography, medicine and health, reatil, finance and education.

# Infrastructure of LFK
It has an elegant, simple and easy to implement approach. Our social mode of interaction on the media had made possible for us to easily figure out what works. Many profile today are comprised of attributes. Therefore, we reduce data into certain groups for seemingly public key implementation.

Digital Nucleus Agregator(DnA): These are attributes that can be converted to encrypted strings for various intermediate representation in the digital space. e.g Name, SS#, eFri, DOB, PIN, Address, password Gender, Driver license# etc. It could be anything of your choosing. Profiles rely on DnA as their building blocks for intermediate representation in this reference.
DnA are derived from profiles attributes as we will demonstrate later.

Digital Data Nucleus Authority (DDnA): These are integration of multi DnAs. This could be held locally or externally in a data base or function-running code platform such as lambda in aws cloud. The architecture creates a data bank as good as a phone book of today. This is where all the intermediate representation could be found in encrypt forms followng homomorphic encoding or encryption algorithm.  


# Architecture of data

Let’s revisit the phone number as a seed input: There are many orderly ways to pick out 2 distinct numbers from an arrangement of 10 digits--> 788 890 6754.
However, we will first calculate the arrangements with repeats in 788 890 6754. We start with:
8's
Let n = 10 and k =3
nPk = 10!/3! = 604,800
7's 
let n= 7 and k=2
       7!/2! = 2520
singletons
5! = 120
arrangement = 604,800*2520*120 = 182,891,520,000
The above means that there are 182,891,520,000 ordered ways of arranging 
						       7888906754
						       ...
						       8889067547	
						       8890675478
						       8906754788
						       ,...
						       9067547888
						       ...
Further one can arrange these numbers in twos. If we must arrange these numbers in five sets of twos. It will be another 10!/8! Way or representing the distinguished arrangement = 182,891,520,000*90 =
16,460,236,800,000‬
Iff all two digits are distinct.
						       78 88 90 67 54
						       ...
						       88 89 06 75 47	
						       88 90 67 54 78
						       89 06 75 47 88
						       ,...
						       90 67 54 78 88
						       ...
Each of these numbers could be used as seed for 680 digits long encryption keys: They become offsets and are only made ready when needed.

There is a whole algorithm to address non-repeat of the said digits of numbers and that is not within the paper's purview. Rest assured no number is repeated in the algorithm. Each of these 2 distinct numbers (seeds) from the 10 digit arrangementss are found on the matrix as positions (Pn). They will further generate another 680 digit long numbers following the certain algorithm. The 680 digit long numbers will be used as the encryption keys. Normally 5 sets of 680 digit long from Pn=1.+ Pn=2.+..Pn=5 are needed. At least, for the proposed reference implementation. Each position generates a once in a life time set of 680 digit number. This is actually emphasized in this paper.

•Full M5 mechanism This method could operate on any DnA propped by any attribute. Note we will demonstrate DnA using password as input. We will also demonstrate volumetric data scheme using the message and any DnA as input for this algorithm. 

You can also use message C in place of the password.

![alt text](https://github.com/jumezurike/backend-master-lokdonSKI/blob/master/pasEncrypt.PNG)

[
							      Implementation of password encryption Fig. 4.0
								 						]
					                                                                  
													  
When an offset is added to the length of the encrypted message C or CT (ciphertext). That no longer represents the length of the message. Rather a periodic key D is used to stream the length of the message. This does not void the condition of the classical stream cipher requirements: Superficially, each byte of the plaintext and ciphertext are one to one function (bijecture) since both share similar length as the key size. However, a detailed observation proves a distribution that shows n numbers of ciphertext for any plaintext. There is an introduction of randomization by using some random and periodic string k (silent password (SL) as used randomly in this reference). This string is also reverse in turn. This increases the entropy of key length bearing a perfect secrecy [6]. Especially the one-time pad scenario cannot outlive the philosophy:

"Perfect secrecy is a strong notion of cryptanalytic difficulty".

Also note that in as much as the keys are seeded and generated. The dynamic distribution scheme of the keys make certain; no expended key will be generated from the faces of the lattice position (Pn) or the matrix. And neither will the generated keys be used be used again. Every 680 long key is used just once. Let’s explore volumetric data scheme in this algorithm. We are or-ing the message with the modular PIN (MPIN). A PIN is naturally 4-6 digits numbers. In this reference two characters represent each of the PIN numbers making the overall string (characters) length 2 * PIN.
 
![alt text](https://github.com/jumezurike/backend-master-lokdonSKI/blob/master/Data_encryption.PNG)

[
							    Implementation of data encryptoin Fig.5.0
					                                                                ]

Following the above process, the mpin encrypt shown is that of the recipients. If one is sending a message requiring ZKP. For example, M3 mpin of position (P mpinktn=3) is tripped and sent with the message:

Data + mpin encrypt = CT5 --> M5 encrypt -->[ciphertext1]^[mpinm3 encrypt]^[Pktn]^[P mpinktn] -- > M5

Note the removal of M3mpin key positions.
Data + mpin encrypt = CT5 --> M5 encrypt -->[ciphertext1]^[mpinm3 encrypt]^[Pktn] -- > M5

On your device you have mpinm2 encrypt:
[mpinm2 encrypt]^[P mpinktn=2]
Note the replacement of the unstripped m2mpin with m3mpin keys’ position
[mpinm2 encrypt]^[P mpinktn=3]

in this order the attacker may never be able to go back to M1 if at all they gain access to the network. M3mpin could be used as a digital signature of each user in the network. 

# Simply put->
	   [   1. The M3PIN or any other mode chosen except for M1 and M5 will serve as the Public key and intermediate 
	   
	       representation (IR) for (ZKP)*****
	   
               2. The seeding positions (Pn) serve the purpose of key encapsulation (KEM)***** 
	       
	       3. Signatures (reflecting biometrics this time) are infused in the IR of ZKP*****
	       
	       4. Public key encryption or any encoding is borne within the scheme as a whole*****       ]

# C++ Package demonstration \\\___  \___   \___ \___ \___  \___  \___  \___ \___ \___ \___  \___ \___  \___ \___  \___ \___  \___ \___  \___ \___  \___ \___  \___ \___\\\

1. KnightSolver.cpp (This solves the open knights tour with numbers >> KT)

2. st.cpp (This is the unicode component order of written or spoken words >> ST)

<<96 chars for Latin-1 Supplement   

<<4 chars for ASCII punctuation and symbols

<<26 chars for Lowercase Latin alphabet

<<6 chars for ASCII punctuation and symbols

<<26 chars for Uppercase Latin alphabet

<<7 chars for ASCII punctuation and symbols

<<10 chars for ASCII Digits

<<16 chars for ASCII punctuation and symbols

<<63 chars from Latin Extended A

All are totaled at 256 bytes (2048 bits)

3. revnum.cpp (Reverse the cipher template derived after mapping)

4. filecrypt.cpp (This does the mapping of ST to KT is done with this)

5. KnightCell.cpp (The instruction codes for the knight move is here) 

6. main.cpp (this takes care of the implementation we desire)                      

# ADVANTAGES OF THE NEW APPROACH or AXIOMS:

1.	1.	GF 2p where p =< 8; solutions are no longer bounded by irreducible polynomial of 8th degree. GF 2p is submitted under new conditions where p !<8 & p > 8 | ꚙ (or goes to infinity).

2.	Non-Deterministic reduction insinuates that hard problem arises from 16 * 16 matrix e.g We embodied OKT as a hard (NP-Complete) problem with other complexities and biases to derive ciphertext from cryptographic engine. It is also noted that this very system does not originate lattice base cryptography but shades light on the form.

3.	Knight's tour (KT) could NOT be solved in polynomial time within unbounded field. A matrix of scope is of bounded field that could hold solutions of KT just like the elements of lattice basis. The changing nature of the nodes owing to the decision needed to advance to another element happened as a deterministic reduction. There is also a randomized reduction of seeding the key generators. The bigger the scope the more time it will take to negotiate and decide a fitting node just like in neural networks. With this in view balancing symmetric stream of block (key) significant size, encryption time and implementation could yield cryptography of the future.

4.	Similarly, AES exhibits the characteristics observed by the movement of the values held in the indices of GF of scope 16 * 16 matrix or lattice basis. Each knight' tour opens at 0 position by tracing a clean sweep the elements of the matrix and closes at another position 255. Therefore, the new approach: 
a. Sub bytes 
b. Addroundkeys 
c. shiftrow 
d. mixcolumns 
Using a mapping scheme of ST to KT and multi-mode-wrapping to achieve the afore mentioned states. 
Irreducible polynomial is no longer a question of symmetric key cryptography for the fact that quantum computers will probably solve them. The new protocol is a non-suspect because it has no key schedule or invertible linear. To understand this context is possible to draw an analogy of 3-D space e.g a cube. A cube has faces (6), edges (12) and vertices (8). We are using the faces here: These are external to the popular context in cryptography. They have the largest set of vectors (numbers) vis-a-vis largest flux.

5.	Cipher keys are no longer saved as they are generated from any position on the matrix (lattice face) upon request. Each position has a different set of numbers to be generated. 5 sets of (680 long digits) from 5 different positions are chosen from the matrix of 16*16 (256 bytes or 2048 bits). Attributes are chosen prior to be arranged into n≤5 different modes of encrypt for each attribute or payload fed into mode one all the way to mode five (M1-M5).

6.	The keys always change for any single message because the position on the lattice face changes as well. You can get started from any indexed point or vector. The origin 0 to any other part produces a different entropy flux. The order of these positions is seemingly regular (deterministic), they generate chaotic set of numbers. A new set of 680digit long numbers. This knowledge reveals the changing nature of the message' ciphertext as well. When similar contents are encrypted the ciphertext are decisively different in the new order. 
Thus, hashing could only be necessary for cyclic redundant check (CRC) or message integrity check. P! = NP || P not a subset NP.

7.	The output or ciphertext from the message input in M1 is used as input in M2. The ciphertext from mode two is used as the input in mode three (M.). The ciphertext from mode three is used as input for mode four (M4). The ciphertext from mode four is used as input for mode five M5. This protocol shows the characteristics of homomorphic encryption mechanism (HE) [11]. The homomorphic encryption (HE) properties makes possible the flexibility of the algorithm (M1-M5) as public key encryption management. These encrypts from this wrapping technique are used for ZKP.

8.	The complexity is O (n = message.length )

9.	Key encapsulation mechanism (KEM), digital signature and seeming public key encryption is built within the algorithm from the scratch. The change mode mix of attributes e.g MPIN, eFRI, Address and Password can give IAM operations facilitating god mode permissions in all kinds of environments with respect to business logic.

10.	Plaintext to ciphertext relationship is (1: n>1) number of ciphertexts: This is necessary to establish HE.

ASSUMPTIONS:									     		
1. Modern primitives of cryptography only recognizes 2S or 2 stable standard signal state. e.g 0/1  
2. Post-quantum cryptography must recognize 4S or 4 stable standard signal state e.g various atomic state or photon’ superposition.  
4. We assume an ideal environment without anomalies

# ***Basic Analysis of QC & LFKI 

We summed up axioms based on the current information and the implementation of modern cryptography.

Pre-quantum computing (Currently):

Encryption (bits) |Size of Dword (bits) |Stable standard signal state (unitless) |Block size (bytes)|State of the Art

256---------------------------8-----------------------2----------------------------32 Bytes-----------256 bits AES

2048--------------------------8-----------------------2----------------------------256+ bytes---------2048 bits ECSMID

Post-Quantum Computing 

Encryption (bits)  |Size of Dword (bits) |Stable standard signal state (unitless) |Block size (bytes) |QC resistance(bits)

256----------------------------8-----------------------4----------------------------32 Bytes-----------128 bits	 AES

2048---------------------------8-----------------------4----------------------------256+ bytes---------1048+ bits ECSMID

The table is a potent and simple approach to presenting a quantum-immune or resistance cryptography. This simplifies the complexity to the understanding the work of cryptography done with primitives of lattice basis. It is clear by now that quantum computing will be the death of AES and many other crypto systems. The nature of quaternary number manipulation makes this possible. Do check the C++ operation of the mechanism-->>https://youtu.be/sx0YBK4RYcw
										    

Sample 
#1 CIPHERTEXT of ECSMID: 

Ã§Ä”I4Ã ÄÄµÃ¬Ã­iÄ™\Ä³Ã’ahÃ½Ä½Â¿Ã…Ã•Ã³zÂ­ÄÄ ÃtxÃ­nÃ–yÃœÃ Ã®%ÄºiÄµHÃ®vÄEÄÄ“Ã˜+Ã‡Ã›Ã[:nÂ«(ÃEÂ°!ufÄ¤;Â¹@{Å(ÃªÄ‰AZxDÄ«}Â¶azÂµwÃˆ2Â¿Ã„Ã¯p*QnÃ¤zTÃ¬!Ä·Ã„Ã‰.#uÂ³Â¿Ã¢Ä¢CÃ«ÃW:G<Ä‰Ä²Ä™ÃezÃ¸lÃ»Â±Ä¦Ä’Ã¬Ã­Ä¼Ä·]ÄÂ­&4ÄÄ†ÃÄ¼iÄ–Â¨Ã°Ä«?-Ä»Ã¡Ä‘Ä±NÄˆÃ¡Ä”ÃŸÄ·ÃÂ±ÃªÄ˜Ã”Ã€Ã›2IÄ¡9ÄŠ,Â¿^6Ä·YÃ”+Ä¶Ä‘ÄƒÄ˜Ä¼Ã¢Ä²LPÃŒIÃ”Ä£Ä 8Ã†Ä¹iÂ©ÃˆÃ¡Ã§tÄ…Ä’1f\,Ã“zÃ­VÃŸÃ›OÂ¤@$ÃœÃ´Ä¯Ä‡sKÄ·ÄšÂ´xÄžÄªÂ²Ã— Â¶ÄƒÂ¡3Ä´Ã›ÄŒÂ®Ä¶Ä’Â±Ä˜n-/YÃ†'Ãº2+=iÃ˜Â¡Ãµ{Ãœ^ÃÄ‹Ä•Â³*Ã­ÄŽU>prÃ†n]LÄŒMÂºÄ•)Ã¹B]+Ã™bKÃ‚/Ã’Ä¡Â´Ä‚,KÄª/MÂ¨xxxxxxxxxxxxÃšÃ‰ Ã‡Ãœ=:Ä‹Ä¢?8AÂªU6C!Ã†Ã›ÄŽ;ÄŒÄ½>9ÄŠÄV7BÂ§TÃŠÃ™ÃˆÃÄºÄ«<Ä£ÄœÄ¡@Â«Ä‚Â©D5Ã…"ÄÄªÄÄ¾Ä¯Ä¼Ä‰ÄžÄ›Ä WÂ¦SÂ¨Ã˜Ã‹ÃžÄ¹Ä®Ä»Ä¬Ä±Ä¤Ä³Ä˜ÄƒÂ¬Ä4E#Ã„Ä©ÄÄ¿Ä°ÅÄ´Ä—ÄˆÄŸÄšÂ£XÂ¥RÃŒÃ—Ä¸ÃŸÄ¶Ä­Ä”Ä¥Ä²Ä™Ä„Â­Ä€iF3Ãƒ$Ã¡Ä¨Ä‘Å€ÄµÄ–Ä‡Ã¼Ã¿Â¢YÂ¤QhÃ–ÃÃ”Ä·Ã Ä•Ä¦Ä“Â°Ä…Â®Ã½jw2G%Ã‚ÃµÃ¢Ä§Ä’Ã±Ä†Ã»Ã¾}xÂ¡ZgPÃŽÃ•Ã¤Ã“Ã¶Ã³Ã¸Â±Ã°Â¯ÃºmvkH1Ã&Ã‘Ã´Ã£Ã¨Ã­Ã²Ã¹|y~[fO`Â¶ÃÃ€Ã¥Ã’Ã·Â²Ã©zÃ¯nul_0I'ÂºÂ·ÃÂ¿Ã¬Ã§Ã®qt{\eLaNÂ¸ÂµÂ¼)Ã¦Â³Â¾+Ãªor-^cJ/Â»(Â¹Â´Â½*Ã«ps,]dK.Mbç½‘ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½"ÃªÃ–Ä‡Ã¶Ä¼

#2 CIPHERTEXT of ECSMID
Ä‰Ä´VÄºÂ´Ã°Ã†Ä”Ä¸VÂ¹Ã{Ãº!Q^;Ä½4Ä§'_Ã¬MÂ·Ä¶Ã²Ä¦ÄœZÃ‚Ä²WÂ±IÂ«Â¢Ã€HÂ±@Ã¹Ã¬Ä•Â¡Ã4Ã«XÄ‘Ã…hMÃ·ÃŒÄ§Â¸&ÄÃ¡Ä¹Ä›xÃŸ<Â¡Ä•Ä¤[rÃ¼Ä¬1bÃ…Â³Ä¶Â¬Ã½Ãƒ_!Ä£Ã¨Ä„Ã˜jÄŸÄ§9`ÂµÄ°FÃ»ÄŸDÂ¥Ä»Ä§Â¥XÄ‰Ã¤C9Ä‹Ä•Ä©{Ä¾ÃŽÂ·Ã™ÄŒÂ­ pÃ²Ä¢Ã“Ã£-#Ä›XÃ¦Ä„*ÂºÃ±Ä¼Ã¬Ã‚ÄªÄ›Ã°ÃÅ€Ã_ÄÃ¡aÃ°Â«Ã­Ä»Â¼JÂ­Ã‘Ä BÃµÄœÂ«SÃ°aÂªÃ—Ã­'PÄ±ÅÄ©ÃŠÃ¹Ã»Ä½!ÄšÂ»Ã¢xKÃ«HÃ¨Ã¾Ã¶Â³Ã¡]ÃŽÄ–Â´'i/Å=Ä†Ã›Ä4Ä€Ã²Ã–Ã‚Ä©Ã®Ã½Ã«ÃˆÃŸtÃ“ gÃ¤fÃ“Ä“Ä‚ÂºÃ©sÂ»Â¶ÃŽOÄDchÄÂ¬ÃŒÃ2IOÂ¼Ã‘Ã–Ã£Ã…Ã®IÃ©Ä‚Ã¶Â¿oÃ²ÄªÄ¢ÃÃ¬Ã¶slÃ£Â¸Â¼Â¨Ã§ÄšÃ‚ÃÃ–BÃ•Ã‡fpÃ°Â¥Â¸rnÃÂ»Ä·ÄšÃŠÃ–ÃˆÄ K!dbÃ¥ÃƒsÃÂ»Ã—ÃƒÃ“Ã”Ã¨Ã‡NJÃœl;Ãª;;;;;;Y*WT[,Â±Ã²Ã·.ÃµÄªÄ•0Ä¯Ä¾VSZ+Â°Ã±Ã¸-Ã´Ä©Ä–/Ä®Ä¿Ä”1)XU\yÂ²Ã³Ã¾Ä‰Ã¶Ä­Å€Ä«Ä°Ä½ÄºR]zÂ¯Ã°Ã¹Ã®Ã»Ä¨Ä—Ä¦Ä·Ä¼Ä¹2Ä“{(}xÂ³Ã€Ã½ÄˆÃ¿ÄŠÅÄ¬Ä±Ä¶Ä»Ä´^QÂ®ÂµÂ¬Ã¯ÃºÃ­Ã¼Ä§Ä˜Ä¥Ä¸Ä³Ä’3'|w~Â¿Â´ÃÄ€Ä‡Ä¢Ä‹Ä²Ä‘ÄœÄµÄžP_Â¢Â­Â¶Â«Â¾Ã¡Ã¬Ä™Ä†Ä¡Ä¤ÄŸ4Äa&ivÂ¡tÃ£Ã‚ÄÃ Ä£ÄŒÄ›ÄÄÃšFO`Â£hÂ·ÂªÂ½Ã¢Ã«ÄšÄ…Ä Ã›ÄŽ5%bEjuÂ¤sÃ¤ÃƒÄ‚ÃŸÃ¨ÄÄ„Ã™ÃœDGNg oÂ¸Â©Â¼Ã§ÃªÄƒÃ˜Ã6Ã•M$cpk>Â¥rÃ¥Ã„ÃÃžÃ©Ã–Ã‘ÃˆHCJ!fqnÂ¹Â¨Â»Ã¦Ã—ÃÃ‰Ã”7#LAd=l?Â¦;ÃŽÃ…ÃŒ9Ã’Ã‡ÃŠBI"K@e<mÂºÂ§:ÃÃ†Ã‹8Ã“ç¿¯?Ã¶x&NÄ¸Ä¼

MESSAGE TEXT:

"o perhaps, you've generated some fancy text, and you're content that you can now copy and paste your fancy text in the comments section of funny cat videos, but perhaps you're wondering how it's even possible to change the font of your text? Is it some sort of hack? Are you copying and pasting an actual font?

Well, the answer is actually no - rather than generating fancy fonts, this converter creates fancy symbols. The explanation starts with unicode; an industry standard which creates the specification for thousands of different symbols and characters. All the characters that you see on your electronic devices, and printed in books, are likely specified by the unicode standard."

Although we mentioned ASCII wide-character, the unicode were explored java for those unfamiliar with C++. You can run the ciphertext output on ‘cryptool’ to see how it defies today's analysis of cryptography. 

# At this point, we are able, to show that each instance of message encrypted produces distinct ciphertexts. There could be a contextual similarity for similar words yet the ciphertext of the smallest character in the message will be different for every iteration. This is against the prediction of cryptographic primitives. However, it is a strength we need to tap into because it opens a door for those interested in data system, repository, analytics and indexing for non-entropy entrant. 

This is another area requiring exploratory work and further research. If you are interested in the said area, note that the secret of the encrypted message will remain undisclosed. There is a huge commercial potential in the name of tranparency and visibility for the enterprises. One can only try to draw a conclusion to the possibility of the  ciphertext and meta data relationship. I don't know how this could be done, but there is nothing stronger than a human will. In sum, the area is not within the purview of this paper. You can draw inspiration from Eureka Data System [8].

*******************************************************************************************************************************
# CONCLUSION:

One might not fully understand all the possibilities in the proposition of the algorithms. The information provided shows clearly a fitting premise indicating that falsifying responses whether it is verification or intermediate response fostering secrecy of the hidden message could be impossible in a bounded abstraction. Mathematical functions that satisfies one reduction bias for NP complete problems, can no longer lead cryptography in the age of quantum computing. These problems are no longer considered hard problems. There is a need for hard or harder problems within the set of NP problems. We surmise that giving the infinite samples of lattice or matrix vectors: They are indeed more than capable when dealing with the challenges posed by quantum computing. The regularity of the points in Euclidean space are endowed with chaotic arrangements within the lattice basis. Especially, when the individual basis is reduced to cryptographically secure numbers. The generation of seeds or keys for encryption are much more efficient in entropy, fast, backward compatible on hardware/software. They are transparent, visible and fittingly complex. We have built several applications with this to note the interesting flow of this security architecture. Many other implementations of this skeleton abound. This has a great potential for possible commercial uses. Let us know what you think and what you will do with this as well as what you will like us to modify together. We will continue the research work.

*******************************************************************************************************************************
# REFERENCES

[AJI04] Miklos Ajtai. Generating hard instances of lattice problems. Quaderni di Matematica, 13:1–32,2004. Preliminary version in STOC 1996.

[1] Shor, P.W. "Algorithms for quantum computation: discrete logarithms and factoring". Proceedings 35th Annual Symposium on Foundations of Computer Science. IEEE Comput. Soc. Press. doi:10.1109/sfcs.1994.365700. ISBN 0818665807

[AKS] M. Ajtai, R. Kumar, and D. Sivakumar,A Sieve Algorithm for the Shortest Vector Problem, Proc.33rd Symp. Theory of Computing (STOC), pp. 601–610, 2001

[2] https://blog.trailofbits.com/2018/10/22/a-guide-to-post-quantum-cryptography/

[3] https://www.csie.nuk.edu.tw/~cychen/Lattices/The%20shortest%20vector%20problem%20in%20L2%20is%20NP-hard%20for%20randomized%20reductions%20(extended%20abstract).pdf

[4] Thijs Laarhoven, Joop van de Pol, Benne de Weger "Solving Hard Lattice Problems and the Security ofLattice-Based Cryptosystems" ∗ September 10, 2012
https://eprint.iacr.org/2012/533.pdf

[5] Niklas Johansson et al. Quantum Simulation Logic, Oracles, and the Quantum Advantage, Entropy (2019). DOI: 10.3390/e21080800

[6] Shannon, Claude (1949). "Communication Theory of Secrecy Systems". Bell System Technical Journal. 28 (4): 656–715. doi:10.1002/j.1538-7305.1949.tb00928.x. hdl:10338.dmlcz/119717.

[CS71] Cook, Stephen (1971). "The complexity of theorem proving procedures". Proceedings of the Third Annual ACM Symposium on Theory of Computing. pp. 151–158. doi:10.1145/800157.805047

[7] https://sites.math.washington.edu/~morrow/336_12/papers/juan.pdf

[8] https://eurekadata.net/index.php/introduction/

[GC09] Gentry, C.: Fully homomorphic encryption using ideal lattices. In: Proceedings of the 41st ACM Symposium on Theory of Computing – STOC 2009, pp. 169–178. ACM, New York (2009)

[9] https://math.oregonstate.edu/home/programs/undergrad/CalculusQuestStudyGuides/vcalc/flux/flux.html

[10] https://blog.trailofbits.com/2018/10/22/a-guide-to-post-quantum-cryptography/

[11] https://www.cs.umd.edu/~huqi/MasterThesisR.pdf

[12] https://en.wikipedia.org/wiki/One-time_pad#cite_note-shannon-3

#This particular C++ program is licensed under GPL-3.0
