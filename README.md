# Lokdon Secret Key Infrastructure (SKI) for Quantum Resistant Computing

*******************************************************************************************************************************!
*******************************************************************************************************************************!
LokDon security project: Josiah Johnson Umezurike. This document is a brief description of over 20 years research work. We are not mathematicians. We only want to solve the common problems of the computing world. We are aware of the havoc quantum computing will bring to the modern cryptography. Consequently, we have prepared ourselves a decade in advance. We have used AES to develop a 2048-Bit AES-hybrid. This is a low-cost high entropy; end-point to end-point cryptographic system for cloud, mobile and IoT devices (ECSMID). This system is a category of hard NP problems closely related to numbered faces of a lattice in grid basis. This crypto shows the properties of both symmetric, asymmetric cryptography or public key infrastructure.
*******************************************************************************************************************************!
*******************************************************************************************************************************!

# Problem 
The Frailty of PKI and AES: There are numerous talks about PKI. Ponemon institute, Gartner, IBM and many other reliable and prolific sources had mentioned their worries about the future of PKI as we know it. More so, PKI and AES are the dominant part of the mechanism securing the internet transactions of today. The banks, health, retail, government and all entities use these two technology. They are supposed to secure and make private each communication whenever you access any secure website. It is speculated that since PKI is based on mathematics (N = p * q ), Phi(N) = (p-1)*(q-1) where (e, N) is the public keys and (d, N) is the private key. There is a condition e { integer; 1<e<phi(N); & co-primes (sharing no factors) with N & phi(N)}. Choose d such that, { e*d mod phi(N) = 1}:

Asymmetric:

Encrypted data ( c) = msg^e mod N

Decrypted data  (msg) = c^d mod N

AES will suffer a similarly if not the same fate as RSA. The future of quantum computer will certainly vilify it. We don't really have to wait into the future anyway. People are already saving petabytes of data in cloud. These will be disclosed as soon as quantum computer becomes available. 

The Fear:
If anyone can obtain the factors of the lager number N with d (public key) any message will be decrypted. You should also note that Quantum computing has the potentials to solve the math and/or crack these numbers in a short period of time. This is usually known as polynomial time. In that case the RSA math will no longer be a hard problem of a non-deterministic polynomial (NP). 

Symmetric:

Let Ct = cipher template length; where the length is the same as the keys used to perform wholistic encryption of the message. The message is added to extended key K of period D which could be an 64 bits passphrase. Note that a modulo arithemetic is used herein. Some find it convenient to use seeds in phone numbers (10-15 digit numbers arranged in a particular order) or pick vector on the matrix which in turn generates 680 digit numbers from each position.  

Encrypted data (c) = (msg, D): (msg or D) mod Ct

Decrypted data (msg) = (c, D): (c xor D) mod Ct

Lets look at it this way: There are many orderly ways to pick out 2 distinct numbers from this arrangement of 10 digits--> 788 890 6754
Let n = 10 and k =2
nPk =  10!/8! = 90

Each 2 distinct numbers (seed) found on the matrix will further generate another 680 digit long numbers. The 680 digit long numbers are now used the the encryption keys. Normally 5 sets are needed at least. We will discuss this further in the paper.

# Solution to the problems:

We believe that any mathematical problem is there to be solved. This means that our crown jewel cannot depend on any mathematical function based on Fermat's theorem to be safe guarded eternally. Quantum computing will wreak havoc on modern day cryptography whenever it finally gets into the hands of consumers. The idea one must have will be to find a solution, not to wait for a solution to present itself. To solve this problem, we used 3D shapes and their properties: Especially the face of a cuboid in Galois field. The properties like face, edges and vertices come in handy in assumes infinite space. You can get a flux from these properties as a result of vectors which forms regular point in Euclidean to enhance orientation just like you see in lattice basis. To put all these terms programmatically (codes) the idea of a matrix formation, transposition, transformation and substitution serves us well. The face of lattice will have points or vectors. Same goes to a matrix. Therefore, Flux = double integral F*n dS where n=1. This means that any normal face in a shape will have a regular arrangement of point in Euclidean space (lattice). In this sense, following the elements of Galois' field; a matrix can hold a lattice: It is a lattice too. It will have points upon which forces can interact with it. 

We thought of n = infinity for the Galois field equation which was based on Euclidean space. Imagine that, this is in opposition to present day symmetrical cryptographic limiting scopes. In cryptography this means that those points can represent encryption and decryption components of data by satisfying gf(p^n) where n=00 or infinity. The flux analogy herein depends on the surface area or orientation of the shape and forces (analysis) on them. The changing flux will be likened to the changing entropy at every turn of the algorithm (operation) owed to noise. The total flux is the product of the basis surface area, force and normal vectors. To make a long story short, we created a system of quantum immunity or resistance for the computation by replacing the vectors or points with characters of written words. We carefully chose certain Unicode characters. These formulates the state. Subsequent generation of numbers from these faces following position (Pn=0 - Pn=255) gives rise to other sets (680 digits long) which could be used as cipher templates. These points are numbers generated from the chaotic regularity found in faces of stars, flakes of snow and silicon shapes (of course in 3D). This system comes with a powerful wrapping mechanism. That’s what makes it possible to be used as an exchange channel like what we have in PKI public and private key. We are not going to discuss the full details in this paper at once. However, the school of thought defers from the popular opinion of Shortest Vector Problem (SVP) associated with the current lattice solutions or NP-Complete replica. We deduced from our research that open knight tour on a lattice basis is a harder problem than SVP. It cannot be solved by a quantume computer as long as the matrix is EQUAL or Greater than 16 for the column as well as the row.

# "A quantum machine with qubits orientation cannot resolve with certainty an open knight tour (OKT) of lattice basis if and only if the column (c) and the row (r) of the matix are repectively of r=>16 and c =>16. If any set of keys generated from the matrix postion (Pn) follow n! where n=>256. If comparing any two position on the lattice to sniff out similar 680 long keys is impossible. This probably is the hardest NP complete problem."

Relying on the above premises we have been able to put together an algorithm that combines symmetric and asymmetric cryptography, standing strong enough to resist attacks from quantum computing. - Secret key infrastructure (SKI)-- It recognizes and applies:

 a) public key encryption - 2048 bits AES-hybrid is used for encryption in wraps or modes
 
 b) key encapsulation - positions of key sets are encrypted with msg and separated
 
 c) digital signature - attributes are formed and stored as encrypts (HE properties are used)
 
 d) Hashes are not used in the classical sense for authentication: They only suffice for initial plain text integrity (digest) check
 
 e) CRC or checksum is not pushed here because of HE: If the hashes matches, original plaintext is the same as the current one.
      
The minimum modes for any encryption done is usually 5 or m5 for this system. However, you can encrypt anything (a message etc) from M1 to Mnth. This could be applied in telecommunications, IT, aeronautics, litography, medicine and health, reatil, finance and education.

# Full M5 mechanism
This method could operate on the password and volumetric data as well. You can also use the message C in place of the password.

Password + silent password = CT1 --> M1 encrypt --- [ciphertext1]^[P spktn][P ktn]                  M1

CT1 + silent password = CT2 --> M2 encrypt --- [ciphertext2]^[P spktn][P ktn ]                      M2

CT2 + silent password = CT3 --> M3 encrypt --- [ciphertext3]^[P spktn][P ktn ]                      M3

CT3 + silent password = CT4 --> M4 encrypt --- [ciphertext4]^[P spktn][P ktn ]                      M4

CT4 + silent password = CT5 --> M5 encrypt --- [ciphertext5]^[P spktn][P ktn ]                      M5

When an offset is added the length of the encyrypted message C. That no longer depicts the length of the key. Rather a periodic random key k is used to match the length of the message. This voids the condition voids a condition of the classical stream cipher requirements. Especially the one time pad scenario.

Data + mpin encrypt = CT1 --> M1 encrypt -->[ciphertext1]^[mpinm3 encrypt]^[Pktn]^[P mpinktn] -- >   M1

M1 + mpin encrypt = CT2 --> M2 encrypt -->[ciphertext2]^[mpinm2 encrypt]^[Pktn]^[P mpinktn] -- >     M2

M2 + mpin encrypt = CT3 --> M3 encrypt -->[ciphertext3]^[mpinm2 encrypt]^[Pktn=3]^[P mpinktn=3] -- > M3

M3 + mpin encrypt = CT4 --> M4 encrypt -->[ciphertext4]^[mpinm2 encrypt]^[Pktn]^[P mpinktn] -- >     M4

M4 + mpin encrypt = CT5 --> M5 encrypt -->[ciphertext5]^[mpinm2 encrypt]^[Pktn]^[P mpinktn] -- >     M5

Following the above process, the mpin encrypt is shown is that of the recipients if one is sending a message requiring ZKP. For example, M3 mpin of position (P mpinktn=3) is tripped and sent with the message:

Data + mpin encrypt = CT5 --> M5 encrypt -->[ciphertext1]^[mpinm3 encrypt]^[Pktn]^[P mpinktn] -- > M5

Note the removal of M3mpin key positions.
Data + mpin encrypt = CT5 --> M5 encrypt -->[ciphertext1]^[mpinm3 encrypt]^[Pktn] -- > M5

On your device you have mpinm2 encrypt:
[mpinm2 encrypt]^[P mpinktn=2]
Note the replacement of the unstripped m2mpin with m3mpin keys’ position
[mpinm2 encrypt]^[P mpinktn=3]

This way the attacker may never be able to go back to M1 if at all they gain access to the network. M3mpin could be used as a digital signature of each user in the network. 

C++ Package demonstration contents>>  \___  \___   \___ \___ \___  \___  \___  \___ \___ \___ \___  \___ \___  \___ \___  \___                                                                                                                                                      
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

# OBJECTIVE:

To show that there is a cryptographic approach that fits into the ideal
quantum cryptography. Lattice basis is just an image of what is already there. A low cost, pervasive and high entropy that increases AES capacity to roughly 10 times. Thereby, mitigates the effects of 
post-quantum breaches.

NEW APPROACH or AXIOMS:

1. GF 2^p where p =< 8; -> GF 2^p, where p !<8 && p > 8 || 00 (or goes to infinity).

2. Non-Deterministic Polynomial problems (hard problems) are reconsidered for 16 * 16 matrix e.g We embodied KT as a hard (NP-Complete) problem with no other complexity to derive ciphertext from cryptographic engine; O(m) in complexity. It is also noted that this very system originates lattice base cryptography.

3. Knight's tour of any size could be solved in non-polynomial time; deterministic reduction. The bigger the scope the more time it will take to solve. Balancing symmetric stream of block (key) size, encryption time and implementation could yield cryptography of the future.

4. Similarly, AES exhibits the characteristics observed by the movement of the values held in the indices of GF of scope 16 * 16 matrix or lattice basis. Each knight' tour opens at 0 position by tracing a clean sweep the elements of the matrix and closes at another position 255. Therefore, the new approach reflects:
a. Sub bytes
b. Addroundkeys
c. shiftrow
d. mixcolumns
Using a mapping scheme of ST to KT and multi-mode-wrapping to achieve the afore mentioned mechanism. Irreducible polynomial is no longer a question of symmetric cryptography. No key schedule or register. You can equally draw an analogy of 3-D space e.g a cube. A cube has faces (6), edges (12) and vertices (8). We are using the faces here: They have the largest number of vectors vis-a-vis largest flux. 			                                     
									   	     
5. Cipher keys (P) are no longer saved as they are generated from any position on the matrix (lattice face) upon request by NP. Each position has a different set of numbers to be generated. 5 sets of (680 long digits) from 5 different positions are chosen from the matrix of 16*16 (256 bytes or 2048 bits). Attributes are chosen prior to be arranged into n=5 different modes of encrypt for each attribute or payload fed into mode one all the way to mode five (m1-m5).							     
										     
6. The keys always change for any single message because the position on the lattice face changes as you can get started from any indexed point or vector. The origin 0 to any other part produces a different entropy flux. While the order of the positions are regular(deterministic) they generate chaotic set of numbers. This generates a new set of 680digit long numbers. This knowledge reveals the changing nature of the message' ciphertext as well. When similar contents are encrypted the ciphertext are usually different. Thus, hashing could only be needed for CRC or message integrity check.  P!= NP || P not a subset NP. 

7. The output or ciphertext from the message input in M1 is used as input in M2. The ciphertext from mode two is used as the input in mode three M3. The ciphertect from mode three is used as input for mode four M4. The ciphertext from mode four is used as input for mode five M5. This is Homomorphic encryption mechanism. The homomorphic encryption (HE) properties makes possible the flexibility of the algorithm ( M1-M5) as public key encyrption. This encrypts from this wrapping technique could be used for ZKP.

ASSUMPTIONS:									     		
1. Modern cryptography only recognizes 2S or 2 stable standard signal state. e.g 0/1  
2. Post-quantum cryptography must recognize 4S or 4 stable standard signal state e.g various atomic state or photon’ superposition.
3. O(message.length) complexity  
4. We assume an ideal environment without anomalies

# ***Basic Analysis of QC

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

Although we mentioned ASCII wide-char, the unicode were put in use for java users. You can run this on cryptool to see how it defies today's analysis of cryptogrphy.

*******************************************************************************************************************************
# CONCLUSION:
One might not fully understand all the possibilities in the proposition of the algorithms. The information provided shows clearly a fitting premise indicating that falsifying responses whether it is verification or intermedidate response fostering secrecy of the hidden message could be impossible in a bounded abstraction. Mathematical functions (ordinary NP)  alone, can no longer lead cryptography in the age of quantum computing. This is a great potential for a great commerical use. There is a need for hard or harder problem within the set of NP problems. We surmise that giveing the infinite samples of lattice or matrix vectors: They are indeed more than capable when dealing with the challenges posed by quantum computing. The regularity of the points in Euclidean space are endowed with a chaotic arrangements within the lattice basis. Especially, when the individual basis are reduced to numbers. The generation of seeds or keys for encryption are much more efficient in entropy, fast, backward compatible on hardware/software, transparent, visible and fittingly complex. We have built several applications with this to note the interesting flow of this security architecture. Many other implementations of this skeleton abound. Let us know what you think and what you will do with this as well as what you will like us to modify together. 

*******************************************************************************************************************************
# REFERENCES

[1] https://www.cs.umd.edu/~huqi/MasterThesisR.pdf

[2] https://sites.math.washington.edu/~morrow/336_12/papers/juan.pdf

[3] https://math.oregonstate.edu/home/programs/undergrad/CalculusQuestStudyGuides/vcalc/flux/flux.html

[4] https://blog.trailofbits.com/2018/10/22/a-guide-to-post-quantum-cryptography/

[5] Niklas Johansson et al. Quantum Simulation Logic, Oracles, and the Quantum Advantage, Entropy (2019). DOI: 10.3390/e21080800
