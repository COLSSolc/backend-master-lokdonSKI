# Lattice-Face Key Infrastructure (LFKI) for Quantum Resistant Computing
LokDon security research project:
Josiah Johnson Umezurike | September 12th 2018


*******************************************************************************************************************************!
*******************************************************************************************************************************!
# Forward

This article is an observation from over 20 years research work. We are not mathematicians. The sole intent is to solve the common problem of our time from practitioner’ perspective. It is agreed on all ground the havoc quantum computing will bring to the modern cryptography. Consequently, it is sufficiently relevant to be prepared pre and post quantum. The understanding of Euler, Hamiltonian cycle and lattice basis paved the way in drawing the relationship needed to harmonize the open knight tours (OKT) in the genre of Hamilton’ path. The similarities under study shows the pervasiveness of Hamilton’s path in grid (n x n) formation. In absence of any back track; It does enumerate all points in Euclidean space if and only if n=>5. Hamilton’ cycle, when applied to grid or chessboard, it clearly proves that it is indeed a hard NP as the grid become richly connected. When this exercise extended to the operation of AES (Rijndael) which commonly lies on 4 x 8 grid. It is possible to  expand the scope of AES to develop a 2048-Bit AES-hybrid using the bounded region between the edges and vertices of lattices. The result is a low-cost, high entropy, endpoint to endpoint cryptographic system for cloud, mobile and IoT devices (ECSMID). The reference specification is a category of hard NP problems closely related to numbered faces of a lattice basis or matrix. This cryptography shows the properties of both symmetric, asymmetric cryptography or public key infrastructure (PKE, KEM and DS).
*******************************************************************************************************************************!
*******************************************************************************************************************************!
# Abstract
Some of the papers on lattice basis owe respect to randomization reduction or deterministic reduction. These biases, especially deterministic reduction is used to show that lattices are interesting hard problems within the set of NP Complete problems. Though the shortest vector problem (SVP) seems promising. It is nearly enough to facilitate and establish the lattice basis an exception from the priori art [AJI04]. The many configurations of their vertices seem to dismiss the wonderful properties of the dynamic faces that abounds in various lattice constructs. The elements of these faces found in between regions bounded by the vertices and edges are of great interest to cryptography. When represented as numerical values serve as mathematical images of the basis distribution. In this paper, it is shown that each vector representation has the potential to generate cryptographically secure number of keys. This follows a somewhat rigid rule; deterministic and yet a chaotic arrangement of the lattice vectors represented within a matrix of column (c) and rows (r), where (c=>16 and r=>16). A fitting rule is already available. It is that found in Open Knight Tour (OKT) movements. This can easily be modified to absorb larger lattice basis. They are ready made with properties that are closely related to the regular vectors of Euclidean space. 

# OBJECTIVE:
To show that there is a cryptographic formation following a lattice basis that fits into an ideal set of hard NP complete problems known to be resistant to quantum computing. A matrix  could be seen as a numerical image of a lattice basis. This bring about a low cost, pervasive and high entropy cipher which hybridizes and increases AES capacity to roughly 10 times. Thereby, mitigates the effects of post-quantum breaches.

# An Overview of current cryptopgraphy:
The Frailty of PKI and AES: There are numerous talks about PKI. Ponemon institute, Gartner, IBM and many other reliable and prolific sources had mentioned their worries about the future of PKI as we know it. More so, PKI and AES are the dominant part of the mechanism securing the internet transactions of today. The banks, health, retail, government and all entities use these two technology. 

They are supposed to secure and make private each communication whenever you access any secure website. It is a scientific knowledge that PKI is based on mathematics: Where in, (N = p * q ), Phi(N) = (p-1)*(q-1) where (e, N) is the public keys and (d, N) is the private key. There is a condition e { integer; 1<e<phi(N); & co-primes (sharing no factors) with N & phi(N)}. Choose d such that, { e*d mod phi(N) = 1}:

Asymmetric:

Encrypted data ( c) = msg^e mod N

Decrypted data  (msg) = c^d mod N

AES will suffer a similarly if not the same fate as RSA. The future of quantum computer will certainly vilify it. We don't really have to wait into the future anyway. People are already saving petabytes of data in the cloud. These are going disclosed or exposed regardless the sooner a quantum computer becomes available. 

Symmetric:

Let Ct = cipher template length; where the length is the same as the keys used to perform wholistic encryption of the message. The message is added to extended key K of period D which could be an 64 bits passphrase. Note that a modulo arithemetic is used herein. Some find it convenient to use seeds in phone numbers (10-15 digit numbers arranged in a particular order) or pick vector on the matrix which in turn generates 680 digit numbers from each position.  

Encrypted data (c) = (msg, D): (msg or D) mod Ct

Decrypted data (msg) = (c, D): (c xor D) mod Ct

Lets look at it this way: There are many orderly ways to pick out 2 distinct numbers from this arrangement of 10 digits--> 788 890 6754
Let n = 10 and k =2
nPk =  10!/8! = 90

Each of these 2 distinct numbers (seeds) found on the matrix as positions (Pn) will further generate another 680digit long numbers. The 680digit long numbers will be used as the encryption keys. Normally 5 sets of 680digit long from Pn=1.+ Pn=2.+..Pn=5 are needed. At least, for the proposed refenrence implementation. We will discuss this further in this paper.

# The Problem:
If anyone can obtain the factors of the large number N with d (public key) any message will be decrypted. You should also note that Quantum computing has the potentials to solve the math and/or crack these numbers in a short period of time according to Shor' Algorithm [1]. This time to perform the fit is usually said to be in polynomial time. In that case the RSA math will no longer be a hard problem of a non-deterministic polynomial (NP). Qubit as the stable standard signal states of a quantum algorithm or computher. This new qubit factor will also render any form of classical cryptography useless.

# SOLUTION TO THE PROBLEM:

In the wake of these problems are many proposasl for the direction of modern cryptography. There are 1. Lattice basis cryptography 2. Code base cryptography 3. Multivariate cryptography. Some of these are the secod runners of NIST: Meaning that they are still being considered in the second round of NIST standardization for cryptography. We believe that any mathematical problem is there to be solved. This means that our crown jewel cannot depend on any mathematical function based on Fermat's theorem to be safe guarded eternally. Quantum computing will wreak havoc on modern day cryptography whenever it finally gets into the hands of consumers. 

A lattice is a set of all integral linear combinations of a given set of linearly independent points in Z^n. For a basis B={b1,...,bd} we denote the lattice it generates by L(B) ={d∑i=1; xibi|xi∈Z}. Its rank is d, and the lattice is said to be of full rank if d=n. We identify the basis {b1,...,bd} with the n×d matrix containing b1,...,bd as columns, which enables us to write the shorter L(B) ={Bx|x∈Zd}. We use both the terms lattice point and lattice vector for elements of a lattice [2].

We will spend more time to introduce a new thought or insight to the understanding of the shortest vector problem (SVP) path. While it is generally a consideration for being a NP complete hard problem [3]. Randomization reduction is not enough to establish this as a case of NP Complete hard problem [AKS]. Not one good enough for quantum resistant encryption. If a lattice basis must be retained; it must be an interesting one with some elegant properties that could be reduced to randomized, non-deterministic and deterministic biases. The intention is not to be overly critical. There is a need to be proactive. One’s intent will be to find the right solution out of many; not to accept a solution that is not ripe. This is neither to wait for a solution to present itself. A potent lattice or ideal lattice and its image must be dynamic, with certain rigid rules, yet precise decision making. It must possess a distribution of probabilistic basis transformation with respect to the input and output (references are made to homomorphic encryption). -- The image of the lattice basis is a bounded matrix of interest.

# Specification

To solve this problem, we used 3D shapes and their properties: Especially the face of a cuboid in Galois field. The properties like face, edges and vertices come in handy in assumes infinite space. You can get a flux from these properties as a result of vectors which forms regular point in Euclidean to enhance orientation just like you see in lattice basis. To put all these terms programmatically (code) the idea of a matrix formation, transposition, transformation and substitution serves us well. The face of lattice will have points or vectors. Same goes to a matrix which is a representation of the lattice. [Therefore, Flux = double integral F*n dS where n=1]. This means that any normal face in a shape will have a regular arrangement of point in Euclidean space (lattice). In this sense, following the elements of Galois' field; a matrix, mathematically can hold a lattice's contents: It is then noted that a lattice is only an image. It will have points upon which forces can interact with it. This means that changes in choosing any of these points could change the matrix or the indices they bear. Below is the explanation if informational entropy.
"Mathematically, this is expressed as H(C) = H (M|C), where H(M) is the informational entropy of the plaintext and H(M|C) is the conditional entropy of the plaintext given the ciphertext C. This implies that for every message M and corresponding ciphertext C, there must be at least one key K that binds them as a one-time pad. Mathematically speaking, this means K=>C=>M, where K, C, M denotes the distinct quantity of keys, ciphers and messages. In other words, if you need to be able to go from any plaintext in message space M to any cipher in cipher-space C (encryption) and from any cipher in cipher-space C to a plain text in message space M (decryption), you need at least |M|=|C| keys (all keys used with equal probability of 1/|K| to ensure perfect secrecy."[4]

It is also a standard practice to increase entropy by introducing a modulo arithmetic which add (OR) passphrases or characters to the original messages.
We thought of n = infinity for the Galois field equation which was based on Euclidean space. Imagine that, this is in opposition to present day symmetrical cryptographic limiting scopes. In cryptography this means that those points can represent encryption and decryption components of data by satisfying gf(p^n) where n=00 or infinity. The flux analogy herein depends on the surface area or orientation of the shape and forces (analysis) on them. The changing flux will be likened to the changing entropy at every turn of the algorithm (operation) owing to noise. The total flux is the product of the basis surface area, force and normal vectors. To make a long story short, we created a system of quantum immunity or resistance for the computation by replacing the vectors or points with characters of written words. We carefully chose certain Unicode characters. These formulates the state. Subsequent generation of numbers from these faces following position (Pn=0 - Pn=255) gives rise to other sets (680 digits long) which could be used as cipher templates. These points are numbers generated from the chaotic regularity found in faces of stars, flakes of snow and silicon shapes (of course in 3D). This system comes with a powerful wrapping mechanism. That’s what makes it possible to be used as an exchange channel like what we have in PKI public and private key. We are not going to discuss the full details in this paper at once. However, the school of thought defers from the popular opinion of Shortest Vector Problem (SVP) associated with the current lattice solutions or NP-Complete replica. We deduced from our research that open knight tour (image of lattice basis) on a lattice basis is a harder problem than SVP [5]. It cannot be solved by a quantum computer as long as the matrix is ‘equal && greater than 16 for the columns as well as the rows.

# "A quantum machine with qubits orientation cannot resolve with certainty an legal open knight tour (OKT) of lattice basis if the column (c) and the row (r) of the matix are repectively of c=>16 and r=>16. If any set of keys generated from the matrix positions (Pn) follow n! where n=>256. If comparing any two positions on the lattice to sniff out similar 680 long keys is impossible. This probably is the hardest NP complete problem."

Relying on the above premises we have been able to put together this reference specification of an algorithm that combines symmetric and asymmetric cryptography using ZERO KNOWLEDGE triangle flow and homomorphic encryption, standing strong enough to resist attacks from quantum computing. - Lattice-Face Key Infrastructure (LFKI)-- It recognizes and applies:

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

Digital Data Nucleus Authority (DDnA): These are integration of multi DnAs. This could be held locally or externally in a data base or function-running code platform such as lambda in aws cloud. The architecture creates a bank as good as a phone book. This where all the intermediate representation could be found in encrypt forms followng homomorphinencoding or encyption algorithms.  


# Architecture of data

•Full M5 mechanism This method could operate on any DnA propped by any attribute. Note we will demonstrate DnA using password as input. We will also demonstrate volumetric data scheme using the message and any DnA as input for this algorithm. 

You can also use message C in place of the password.

Password + silent password = CT1 --> M1 encrypt --- [ciphertext1]^[P spktn][P ktn]                  M1

CT1 + silent password = CT2 --> M2 encrypt --- [ciphertext2]^[P spktn][P ktn ]                      M2

CT2 + silent password = CT3 --> M3 encrypt --- [ciphertext3]^[P spktn][P ktn ]                      M3

CT3 + silent password = CT4 --> M4 encrypt --- [ciphertext4]^[P spktn][P ktn ]                      M4

CT4 + silent password = CT5 --> M5 encrypt --- [ciphertext5]^[P spktn][P ktn ]                      M5

When an offset is added to the length of the encrypted message C or CT (ciphertext). That no longer represents the length of the message. Rather a periodic random key k is used to match the length of the message. This does not void the condition of the classical stream cipher requirements: Superficially, each byte of the plaintext and ciphertext are one to one function (bijecture) since both share similar length as the key size. However, a detailed observation proves a distribution that shows n numbers of ciphertext for any plaintext. There is an introduction of randomization by using some random string (silent password (SL) as used randomly in this reference). This increases the entropy of key length bearing a perfect secrecy [6]. Especially the one-time pad scenario cannot outlive the philosophy:

"Perfect secrecy is a strong notion of cryptanalytic difficulty".

Also note that in as much as the keys are seeded and generated. The dynamic distribution scheme of the keys make certain; no expended key will be generated from the faces of the lattice position (Pn) or the matrix. And neither will the generated keys be used be used again. Every 680 long key is used just once. Let’s explore volumetric data scheme in this algorithm. We are or-ing the message with the modular PIN (MPIN). A PIN is naturally 4-6 digits numbers. In this reference two characters represent each of the PIN numbers making the overall string (characters) length 2 * PIN.
 
Data + mpin encrypt = CT1 --> M1 encrypt -->[ciphertext1]^[mpinm3 encrypt]^[Pktn]^[P mpinktn] -- >   M1

M1 + mpin encrypt = CT2 --> M2 encrypt -->[ciphertext2]^[mpinm2 encrypt]^[Pktn]^[P mpinktn] -- >     M2

M2 + mpin encrypt = CT3 --> M3 encrypt -->[ciphertext3]^[mpinm2 encrypt]^[Pktn=3]^[P mpinktn=3] -- > M3

M3 + mpin encrypt = CT4 --> M4 encrypt -->[ciphertext4]^[mpinm2 encrypt]^[Pktn]^[P mpinktn] -- >     M4

M4 + mpin encrypt = CT5 --> M5 encrypt -->[ciphertext5]^[mpinm2 encrypt]^[Pktn]^[P mpinktn] -- >     M5

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
	   [   1. The M3PIN will serve as the Public key and intermediate representation (IR) for (ZKP)*****
	   
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

1. GF 2^p where p =< 8; -> GF 2^p, where p !<8 && p > 8 || 00 (or goes to infinity).

2. Non-Deterministic polynomial reduction insinuates that a hard problem arises from 16 * 16 matrix e.g It is possible to easily embed OKT as a hard (NP-Complete) problem with other complexities and biases to derive ciphertext from cryptographic engine. It is also noted that this very system does not originate lattice base cryptography but shades light on the form.

3. Open Knight's tour (OKT) could not be solved in polynomial time within unbounded field. A matrix of scope (n x n 16=<n) is of bounded field. The matrix could hold solutions of OKT just like the elements of lattice vertices. The changing nature of the nodes owing to the decision needed to advance to another element happens as a deterministic reduction. There is also a randomized reduction of seeding the key generation. The bigger the scope the more time it will take to negotiate and decide a fitting node just like in neural networks. With this in view balancing symmetric stream of significant block (key) size, encryption time and implementation could yield cryptography of the future.

4. Similarly, AES exhibits the characteristics observed by the movement of the values held in the indices of GF of scope 16 * 16 matrix or lattice basis. Each knight' tour opens at 0 position by tracing a clean sweep the elements of the matrix and closes at another position 255. Therefore, the new approach reflects:
a. Sub bytes
b. Addroundkeys
c. shiftrow
d. mixcolumns
Using a mapping scheme of standard state (ST) to open knights tour (OKT) and multi-mode-wrapping to achieve the afore mentioned mechanism. Irreducible polynomial is no longer a question of symmetric cryptography. No key schedule or register. You can equally draw an analogy of 3-D space e.g a cube. A cube has faces (6), edges (12) and vertices (8). We are using the faces here: They have the largest number of vectors vis-a-vis largest flux [CG09]. 			                                     
									   	     
5. Cipher keys (P) are no longer saved as they are generated from any position on the matrix (lattice face) upon request by NP. Each position has a different set of numbers to be generated. 5 sets of (680 long digits) from 5 different positions are chosen from the matrix of 16*16 (256 bytes or 2048 bits). Attributes are chosen prior to be arranged into n=5 different modes of encrypt for each attribute or payload fed into mode one all the way to mode five (m1-m5).							     
										     
6. The keys always change for any single message because the position on the lattice face changes as you can get started from any indexed point or vector. The origin 0 to any other part produces a different entropy flux. While the order of the positions are regular(deterministic) they generate chaotic set of numbers. This generates a new set of 680digit long numbers. This knowledge reveals the changing nature of the message' ciphertext as well. When similar contents are encrypted the ciphertext are usually different. Thus, hashing could only be needed for CRC or message integrity check.  P!= NP || P not a subset NP. 

7. The output or ciphertext from the message input in M1 is used as input in M2. The ciphertext from mode two is used as the input in mode three M3. The ciphertect from mode three is used as input for mode four M4. The ciphertext from mode four is used as input for mode five M5. This is Homomorphic encryption mechanism. The homomorphic encryption (HE) properties makes possible the flexibility of the algorithm ( M1-M5) as public key encyrption. This encrypts from this wrapping technique could be used for ZKP.

8. The complexity is O(n=message.length)

9. KEM, Digital signature and seeming public key encryption is built within the algorthm from the scratch. The mixes of attributes e.g MPIN, eFRI, Address and Password can bring about a God mode permision for IAM operations in all kinds of enviroments with respect to business logic reflected.

10.	Plain text to cipher text relationship is 1:n number of ciphertexts: This is necessary to establish HE.

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
