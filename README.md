# Backend-Master-LokdonSKI
Secret key infrastructure

***********************************************************************!
***********************************************************************!
LokDon security project: Josiah Johnson Umezurike and Ravi Prakash. This document is a brief of the 15+ years work done. We are not mathematicians. We only want to solve the common problems of the computing world. We are aware of the havoc quantum computing will bring to the modern cryptography. Thus we have prepared ourselves a decade in advance. We have used AES to develope ECSMID. This is a low cost high entropy End-point to end-point Cryptographic System for Mobile and IoT Devices.********************************************!  
***********************************************************************!
Package demonstration contents>>                                        \___
                                                                           
1. KnightSolver.cpp (This solves the open knights tour with numbers >> KT)
2. st.cpp   (This is the unicode component order of written or spoken words >> ST)
<<96 chars for Latin-1 Supplement                                   <<4 chars for ASCII punctuation and symbols
<<26 chars for Lowercase Latin alphabet
<<6 chars for ASCII punctuation and symbols
<<26 chars for Uppercase Latin alphabet
<<7 chars for ASCII punctuation and symbols
<<10 chars for ASCII Digits
<<16 chars for ASCII punctuation and symbols
<<63 chars from Latin Extended A
All are totaled at 256 bytes (2048 bits)

3. revnum.cpp (Reverse the cipher template derived aftermapping)

4. filecrypt.cpp (This does the mapping of ST to KT is done with this)

5. KnightCell.cpp (The instruction codes for the knight move is here) 

6. main.cpp ( This takes care of the implemention we desire)                      

OBJECTIVE:
To show that there is a cryptographic approach that fits into the ideal
quantum cryptography. A low cost, pervasive and high entropy that increases
AES capacity to about 10 times. Thereby, mitigates the effects of 
post-quantum breaches.

NEW APPROACH or AXIOMS:

1. GF 2^p where p =< 8; ->  GF 2^p where p !<8 && p > 8 || 00 (or goes to infinity).

2. Non-Deterministic Polynomial problems (hard problems) are reconsidered for 16 * 16 matrix e.g We embodied KT as a hard (NP-Complete) problem with no other complexity to derive ciphertext from cryptographic engine if not by O(m)in space-time. 

3. Knight's tour of any size could be solved in non-polynomial time deterministic reduction. The bigger the scope the more time it will take to solve. Balancing symmetric stream of block key size, encryption time and implementation could yield the cryptography of the future.

4. Similarly, AES exhibits the characteristics observed by the movement of the values held in the indices of GF of scope 16 * 16 matrix. Each knight' tour opens at 0 position by tracing a clean sweep the elements of the matrix and closes at another position 255. Therefore, the new approach reflects:
a. Sub bytes
b. Addroundkeys
c. shiftrow
d. mixcolumns
Using a mapping scheme of ST to KT and multi-mode-wrapping to achieve the aforementioned mechanism. Irreducible polynomial is no longer a question of symmetric cryptography. No key schedule or register.			                                     
									   	     
5. Cipher keys (P) are no longer saved as they are generated from any position of the matrix upon request by NP. Each position has a different set of numbers. 5 sets of (680 long digits) from 5 different positions are chosen from the matrix of 16*16 (256 bytes or 2048 bits) arranged into n=5 different modes of encrypt for each payload fed into m1-m5.							     
										     
5. The keys always change for any single message thus the message ciphertext changes as well. When similar contents are encrypted the ciphertext are usually different. Thus, hashing could only be needed for CRC or message integrity check.  P!= NP || P not a subset NP.                                               

ASSUMPTIONS:									     		
1. Modern cryptography only recognizes 2S or 2 stable standard signal state. e.g 0/1  
2. Post-quantum cryptography must recognize 4S or 4 stable standard signal state.e.g various atomic state or photon’ polarization.
3. O(message.length) complexity                    
										    
****************************************************************
CONCLUSION:****************************************************************
It is true that one might not draw a conclusion based on the information provided. Mathematical functions alone can no longer lead the cryptography in the age of quantum computing. We believe this method is fast backward compatible on hardware/software, transparent, visible and open to changes by permission. We have built several applications with this to note the interesting flow of this security architecture. Many other implementations of this skeleton abound. Let us know what you think and what you will do with this

****************************************************************

Sample CIPHERTEXT of ECSMID. 

Ã§Ä”I4Ã ÄÄµÃ¬Ã­iÄ™\Ä³Ã’ahÃ½Ä½Â¿Ã…Ã•Ã³zÂ­ÄÄ ÃtxÃ­nÃ–yÃœÃ Ã®%ÄºiÄµHÃ®vÄEÄÄ“Ã˜+Ã‡Ã›Ã[:nÂ«(ÃEÂ°!ufÄ¤;Â¹@{Å(ÃªÄ‰AZxDÄ«}Â¶azÂµwÃˆ2Â¿Ã„Ã¯p*QnÃ¤zTÃ¬!Ä·Ã„Ã‰.#uÂ³Â¿Ã¢Ä¢CÃ«ÃW:G<Ä‰Ä²Ä™ÃezÃ¸lÃ»Â±Ä¦Ä’Ã¬Ã­Ä¼Ä·]ÄÂ­&4ÄÄ†ÃÄ¼iÄ–Â¨Ã°Ä«?-Ä»Ã¡Ä‘Ä±NÄˆÃ¡Ä”ÃŸÄ·ÃÂ±ÃªÄ˜Ã”Ã€Ã›2IÄ¡9ÄŠ,Â¿^6Ä·YÃ”+Ä¶Ä‘ÄƒÄ˜Ä¼Ã¢Ä²LPÃŒIÃ”Ä£Ä 8Ã†Ä¹iÂ©ÃˆÃ¡Ã§tÄ…Ä’1f\,Ã“zÃ­VÃŸÃ›OÂ¤@$ÃœÃ´Ä¯Ä‡sKÄ·ÄšÂ´xÄžÄªÂ²Ã— Â¶ÄƒÂ¡3Ä´Ã›ÄŒÂ®Ä¶Ä’Â±Ä˜n-/YÃ†'Ãº2+=iÃ˜Â¡Ãµ{Ãœ^ÃÄ‹Ä•Â³*Ã­ÄŽU>prÃ†n]LÄŒMÂºÄ•)Ã¹B]+Ã™bKÃ‚/Ã’Ä¡Â´Ä‚,KÄª/MÂ¨xxxxxxxxxxxxÃšÃ‰ Ã‡Ãœ=:Ä‹Ä¢?8AÂªU6C!Ã†Ã›ÄŽ;ÄŒÄ½>9ÄŠÄV7BÂ§TÃŠÃ™ÃˆÃÄºÄ«<Ä£ÄœÄ¡@Â«Ä‚Â©D5Ã…"ÄÄªÄÄ¾Ä¯Ä¼Ä‰ÄžÄ›Ä WÂ¦SÂ¨Ã˜Ã‹ÃžÄ¹Ä®Ä»Ä¬Ä±Ä¤Ä³Ä˜ÄƒÂ¬Ä4E#Ã„Ä©ÄÄ¿Ä°ÅÄ´Ä—ÄˆÄŸÄšÂ£XÂ¥RÃŒÃ—Ä¸ÃŸÄ¶Ä­Ä”Ä¥Ä²Ä™Ä„Â­Ä€iF3Ãƒ$Ã¡Ä¨Ä‘Å€ÄµÄ–Ä‡Ã¼Ã¿Â¢YÂ¤QhÃ–ÃÃ”Ä·Ã Ä•Ä¦Ä“Â°Ä…Â®Ã½jw2G%Ã‚ÃµÃ¢Ä§Ä’Ã±Ä†Ã»Ã¾}xÂ¡ZgPÃŽÃ•Ã¤Ã“Ã¶Ã³Ã¸Â±Ã°Â¯ÃºmvkH1Ã&Ã‘Ã´Ã£Ã¨Ã­Ã²Ã¹|y~[fO`Â¶ÃÃ€Ã¥Ã’Ã·Â²Ã©zÃ¯nul_0I'ÂºÂ·ÃÂ¿Ã¬Ã§Ã®qt{\eLaNÂ¸ÂµÂ¼)Ã¦Â³Â¾+Ãªor-^cJ/Â»(Â¹Â´Â½*Ã«ps,]dK.Mbç½‘ï¿½ï¿½ï¿½ï¿½ï¿½ï¿½"ÃªÃ–Ä‡Ã¶Ä¼

#2 CIPHERTEXT
Ä‰Ä´VÄºÂ´Ã°Ã†Ä”Ä¸VÂ¹Ã{Ãº!Q^;Ä½4Ä§'_Ã¬MÂ·Ä¶Ã²Ä¦ÄœZÃ‚Ä²WÂ±IÂ«Â¢Ã€HÂ±@Ã¹Ã¬Ä•Â¡Ã4Ã«XÄ‘Ã…hMÃ·ÃŒÄ§Â¸&ÄÃ¡Ä¹Ä›xÃŸ<Â¡Ä•Ä¤[rÃ¼Ä¬1bÃ…Â³Ä¶Â¬Ã½Ãƒ_!Ä£Ã¨Ä„Ã˜jÄŸÄ§9`ÂµÄ°FÃ»ÄŸDÂ¥Ä»Ä§Â¥XÄ‰Ã¤C9Ä‹Ä•Ä©{Ä¾ÃŽÂ·Ã™ÄŒÂ­ pÃ²Ä¢Ã“Ã£-#Ä›XÃ¦Ä„*ÂºÃ±Ä¼Ã¬Ã‚ÄªÄ›Ã°ÃÅ€Ã_ÄÃ¡aÃ°Â«Ã­Ä»Â¼JÂ­Ã‘Ä BÃµÄœÂ«SÃ°aÂªÃ—Ã­'PÄ±ÅÄ©ÃŠÃ¹Ã»Ä½!ÄšÂ»Ã¢xKÃ«HÃ¨Ã¾Ã¶Â³Ã¡]ÃŽÄ–Â´'i/Å=Ä†Ã›Ä4Ä€Ã²Ã–Ã‚Ä©Ã®Ã½Ã«ÃˆÃŸtÃ“ gÃ¤fÃ“Ä“Ä‚ÂºÃ©sÂ»Â¶ÃŽOÄDchÄÂ¬ÃŒÃ2IOÂ¼Ã‘Ã–Ã£Ã…Ã®IÃ©Ä‚Ã¶Â¿oÃ²ÄªÄ¢ÃÃ¬Ã¶slÃ£Â¸Â¼Â¨Ã§ÄšÃ‚ÃÃ–BÃ•Ã‡fpÃ°Â¥Â¸rnÃÂ»Ä·ÄšÃŠÃ–ÃˆÄ K!dbÃ¥ÃƒsÃÂ»Ã—ÃƒÃ“Ã”Ã¨Ã‡NJÃœl;Ãª;;;;;;Y*WT[,Â±Ã²Ã·.ÃµÄªÄ•0Ä¯Ä¾VSZ+Â°Ã±Ã¸-Ã´Ä©Ä–/Ä®Ä¿Ä”1)XU\yÂ²Ã³Ã¾Ä‰Ã¶Ä­Å€Ä«Ä°Ä½ÄºR]zÂ¯Ã°Ã¹Ã®Ã»Ä¨Ä—Ä¦Ä·Ä¼Ä¹2Ä“{(}xÂ³Ã€Ã½ÄˆÃ¿ÄŠÅÄ¬Ä±Ä¶Ä»Ä´^QÂ®ÂµÂ¬Ã¯ÃºÃ­Ã¼Ä§Ä˜Ä¥Ä¸Ä³Ä’3'|w~Â¿Â´ÃÄ€Ä‡Ä¢Ä‹Ä²Ä‘ÄœÄµÄžP_Â¢Â­Â¶Â«Â¾Ã¡Ã¬Ä™Ä†Ä¡Ä¤ÄŸ4Äa&ivÂ¡tÃ£Ã‚ÄÃ Ä£ÄŒÄ›ÄÄÃšFO`Â£hÂ·ÂªÂ½Ã¢Ã«ÄšÄ…Ä Ã›ÄŽ5%bEjuÂ¤sÃ¤ÃƒÄ‚ÃŸÃ¨ÄÄ„Ã™ÃœDGNg oÂ¸Â©Â¼Ã§ÃªÄƒÃ˜Ã6Ã•M$cpk>Â¥rÃ¥Ã„ÃÃžÃ©Ã–Ã‘ÃˆHCJ!fqnÂ¹Â¨Â»Ã¦Ã—ÃÃ‰Ã”7#LAd=l?Â¦;ÃŽÃ…ÃŒ9Ã’Ã‡ÃŠBI"K@e<mÂºÂ§:ÃÃ†Ã‹8Ã“ç¿¯?Ã¶x&NÄ¸Ä¼


MESSAGE TEXT 
o perhaps, you've generated some fancy text, and you're content that you can now copy and paste your fancy text in the comments section of funny cat videos, but perhaps you're wondering how it's even possible to change the font of your text? Is it some sort of hack? Are you copying and pasting an actual font?

Well, the answer is actually no - rather than generating fancy fonts, this converter creates fancy symbols. The explanation starts with unicode; an industry standard which creates the specification for thousands of different symbols and characters. All the characters that you see on your electronic devices, and printed in books, are likely specified by the unicode standard.



Although we mentioned ASCII wide-char unicode were used. You can run this on cryptool to see how it defies it.


