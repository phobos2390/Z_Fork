/* Q API - constants/numbers.h
	      __	   __
  _______ ___/ /______ ___/ /__
 / __/ -_) _  / __/ _ \ _  / -_)
/_/  \__/\_,_/\__/\___/_,_/\__/
Copyright © 2006-2012 Manuel Sainz de Baranda y Goñi.
Released under the terms of the GNU General Public License v3. */

#ifndef __Q_constants_numbers_H__
#define __Q_constants_numbers_H__

/* MARK: - Irrational numbers */

#define Q_ALPHA /* α ~ Feigenbaum's α Constant */		\
2.50290787509589282228390287321821578638127137672714997733619205\
6779235463179590206703299649746433834129595231869995854723942182\
3777854451792728633149933725781121635948795037447812609973805986\
7123971173732892766540440103066983138346000941393223644906578899\
5122058431725078733774630878534242853519885875000423582469187408\
2042817009017148230518216216194131998560661293827426497098440844\
7010080545496779367608881264464068851815527093240075425064971570\
4704754199328317836453325624153786939571250970663879794926546231\
3767459189098131167524342211101309131278371609511583412308415037\
1649970202246812196440812166865274580430262457825610671501385218\
2164495325433498734874133527958153510165836054557635132765018107\
8119483694595748502373982354526256327794753972699020128915166457\
9394201989202488033940516996865514944773965338769797412323540617\
8198961124940959903531289977336118498473779461084288332938339039\
5090089140863515256268033814146692799133107433497051435452013446\
434264752001621384610729922641994332772918977769053802596851

#define Q_DELTA /* δ ~ Feigenbaum's δ Constant */		\
4.66920160910299067185320382046620161725818557747576863274565134\
3004134330211314737138689744023948013817165984855189815134408627\
1420279325223124429888908908599449354632367134115324817142199474\
5564436582379320200956105833057545861765222207038541064674949428\
4981453391726200568755665952339875603825637225648004095107128389\
0611844702775854285419801113440175002428585382498335715522052236\
0872502916788603626745272133990571316068753450834339344461037063\
0945201911587697243227358983890379494625725128909794898676833461\
1626889116563123474460575179539122045562472807095202198199094558\
5819461368774456173960741156140742437544354992048691809826486523\
6843870279964901739779342513472380873713621160186012818610205638\
1818354097598477964173900328936171432159878240789776614391395764\
0377605371190969320669983619842889818370032294120302106557432955\
5038884584973703472753212192570695841407466184198196100612964016\
1487712944415901405467941800198133253378592493365883070459999938\
375411726563553016862529032210862320550634510679399023341675

#define Q_E /* e ~ Euler's Number */				\
2.71828182845904523536028747135266249775724709369995957496696762\
7724076630353547594571382178525166427427466391932003059921817413\
5966290435729003342952605956307381323286279434907632338298807531\
9525101901157383418793070215408914993488416750924476146066808226\
4800168477411853742345442437107539077744992069551702761838606261\
3313845830007520449338265602976067371132007093287091274437470472\
3069697720931014169283681902551510865746377211125238978442505695\
3696770785449969967946864454905987931636889230098793127736178215\
4249992295763514822082698951936680331825288693984964651058209392\
3982948879332036250944311730123819706841614039701983767932068328\
2376464804295311802328782509819455815301756717361332069811250996\
1818815930416903515988885193458072738667385894228792284998920868\
0582574927961048419844436346324496848756023362482704197862320900\
2160990235304369941849146314093431738143640546253152096183690888\
7070167683964243781405927145635490613031072085103837505101157477\
04171898610687396965521267154688957035035

#define Q_G /* G ~ Catalan's constant */			\
0.91596559417721901505460351493238411077414937428167213426649811\
9621763019776254769479356512926115106248574

#define Q_GAMMA /* γ ~ Euler–Mascheroni Constant */		\
0.57721566490153286060651209008240243104215933593992359880576723\
4884867726777664670936947063291746749

#define Q_PHI /* φ ~ Divine Proportion, Golden Ratio */		\
1.61803398874989484820458683436563811772030917980576286213544862\
2705260462818902449707207204189391137484754088075386891752126633\
8622235369317931800607667263544333890865959395829056383226613199\
2829026788067520876689250171169620703222104321626954862629631361\
4438149758701220340805887954454749246185695364864449241044320771\
3449470495658467885098743394422125448770664780915884607499887124\
0076521705751797883416625624940758906970400028121042762177111777\
8053153171410117046665991466979873176135600670874807101317952368\
9427521948435305678300228785699782977834784587822891109762500302\
6961561700250464338243776486102838312683303724292675263116533924\
7316711121158818638513316203840052221657912866752946549068113171\
5993432359734949850904094762132229810172610705961164562990981629\
0555208524790352406020172799747175342777592778625619432082750513\
1218156285512224809394712341451702237358057727861600868838295230\
4592647878017889921990270776903895321968198615143780314997411069\
26088674296226757560523172777520353613936

#define Q_DELTA_S /* δs ~ Silver Ratio */			\
2.41421356237309504880168872420969807856967187537694807317667973\
799073247846210703885038753432764157

#define Q_PI /* π */						\
3.14159265358979323846264338327950288419716939937510582097494459\
2307816406286208998628034825342117067982148086513282306647093844\
6095505822317253594081284811174502841027019385211055596446229489\
5493038196442881097566593344612847564823378678316527120190914564\
8566923460348610454326648213393607260249141273724587006606315588\
1748815209209628292540917153643678925903600113305305488204665213\
8414695194151160943305727036575959195309218611738193261179310511\
8548074462379962749567351885752724891227938183011949129833673362\
4406566430860213949463952247371907021798609437027705392171762931\
7675238467481846766940513200056812714526356082778577134275778960\
9173637178721468440901224953430146549585371050792279689258923542\
0199561121290219608640344181598136297747713099605187072113499999\
9837297804995105973173281609631859502445945534690830264252230825\
3344685035261931188171010003137838752886587533208381420617177669\
1473035982534904287554687311595628638823537875937519577818577805\
3217122680661300192787661119590921642019893809525720106548586327\
8865936153381827968230301952035301852968995773622599413891249721\
7752834791315155748572424541506959508295331168617278558890750983\
8175463746493931925506040092770167113900984882401285836160356370\
7660104710181942955596198946767837449448255379774726847104047534\
6462080466842590694912933136770289891521047521620569660240580381\
5019351125338243003558764024749647326391419927260426992279678235\
4781636009341721641219924586315030286182974555706749838505494588\
5869269956909272107975093029553211653449872027559602364806654991\
1988183479775356636980742654252786255181841757467289097777279380\
0081647060016145249192173217214772350141441973568548161361157352\
5521334757418494684385233239073941433345477624168625189835694855\
6209921922218427255025425688767179049460165346680498862723279178\
6085784383827967976681454100953883786360950680064225125205117392\
9848960841284886269456042419652850222106611863067442786220391949\
4504712371378696095636437191728746776465757396241389086583264599\
5813390478027590099465764078951269468398352595709825822620522489\
4077267194782684826014769909026401363944374553050682034962524517\
4939965143142980919065925093722169646151570985838741059788595977\
2975498930161753928468138268683868942774155991855925245953959431\
0499725246808459872736446958486538367362226260991246080512438843\
9045124413654976278079771569143599770012961608944169486855584840\
6353422072225828488648158456028506016842739452267467678895252138\
5225499546667278239864565961163548862305774564980355936345681743\
2411251507606947945109659609402522887971089314566913686722874894\
0560101503308617928680920874760917824938589009714909675985261365\
5497818931297848216829989487226588048575640142704775551323796414\
5152374623436454285844479526586782105114135473573952311342716610\
2135969536231442952484937187110145765403590279934403742007310578\
5390621983874478084784896833214457138687519435064302184531910484\
8100537061468067491927819119793995206141966342875444064374512371\
8192179998391015919561814675142691239748940907186494231961567945\
2080951465502252316038819301420937621378559566389377870830390697\
9207734672218256259966150142150306803844773454920260541466592520\
1497442850732518666002132434088190710486331734649651453905796268\
5610055081066587969981635747363840525714591028970641401109712062\
8043903975951567715770042033786993600723055876317635942187312514\
7120532928191826186125867321579198414848829164470609575270695722\
0917567116722910981690915280173506712748583222871835209353965725\
1210835791513698820914442100675103346711031412671113699086585163\
9831501970165151168517143765761835155650884909989859982387345528\
3316355076479185358932261854896321329330898570642046752590709154\
8141654985946163718027098199430992448895757128289059232332609729\
9712084433573265489382391193259746366730583604142813883032038249\
0375898524374417029132765618093773444030707469211201913020330380\
1976211011004492932151608424448596376698389522868478312355265821\
3144957685726243344189303968642624341077322697802807318915441101\
0446823252716201052652272111660396

#define Q_RHO /* ρ ~ Plastic Number */				\
1.32471795724474602596090885447809734073440405690173336453401505\
030282785124554759405469934798178728032991

#define Q_TAU /* τ ~ Prouhet–Thue–Morse Constant */		\
0.412454033640

#define Q_P2 /* P₂ ~ Universal Parabolic Constant */		\
2.29558714939263807403429804918949038759783220363858348392997534\
664410966268413312668409442623789761559175

#define Q_ZETA_3 /* ζ(3) ~ Apéry's Constant */			\
1.20205690315959428539973816151144999076498629234049888179227155\
534183820578631309018645587360933525814619915

/* MARK: - Integer constants */

#define Q_CARMACK_NUMBER	0x5F3759DF
#define Q_LOMONT_NUMBER		0x5F375A86

#endif /* __Q_constants_numbers_H__ */
