char tags[][20]={
    {"html"},       //  1   Vom Browser darstellbare Inhalte
    {"head"},       //	2   Informationen, die nicht im Browserfenster dargestellt werden
    {"body"},       //	3   Kennzeichnet das Dokument als html-Dokument
    {"div"},        //  4   Behälter ohne eigene Eigenschaften
    {"p"},          //  5   Textabsatz
    {"ul"},         //	6   Ungeordnete Liste
    {"li"},         //  7   Listenelement
    {"br"},         //  8   Neue Zeile
    {"title"},      //  9   Seitentitel, erscheint in der oberen Browserleiste
    {"abbr"},       //  10  Abkürzung
    {"acronym"},    //  11  Alternative Bezeichnung
    {"address"},    //  12  Adresse
    {"blockquote"}, //  13  Zitat
    {"cite"},       //  14  Kurzes Zitat
    {"code"},       //  15  Darstellung von Computer-Code
    {"dfn"},        //	16  Definition
    {"em"},         //  17  leichte Betonung
    {"h1"},         //  18  Überschrift Ebene 1
    {"h2"},         //  19  Überschrift Ebene 2
    {"h3"},         //  20  Überschrift Ebene 3
    {"h4"},         //  21  Überschrift Ebene 4
    {"h5"},         //  22  Überschrift Ebene 5
    {"h6"},         //  23  Überschrift Ebene 6
    {"kbd"},        //  24  Darstellung für Tastatureingaben
    {"pre"},        //  25  Vorformatierter Text
    {"q"},          //  26  Anführung
    {"samp"},       //  27  Darstellung als Computercode
    {"span"},       //  28  Generischer Behälter für Inline-Inhalte
    {"strong"},     //  29  starke Betonung
    {"var"},        //  30  Darstellung als Variable in einem Programm
    {"a"},          //  31  Anker oder Hyperlink
    {"dl"},         //  32  Beginn einer Definitionsliste
    {"dt"},         //  33  Begriff in einer Definitionsliste
    {"dd"},         //	34  Erklärung in einer Definitionsliste
    {"ol"},         //	35  geordnete Liste
    {"b"},          //  36  fetter Text
    {"big"},        //	37  großer Text
    {"hr"},         //	38  Horizontale Linie
    {"i"},          //	39  kursiver Text
    {"small"},      //	40  kleiner Text
    {"sub "},       //	41  tiefer gestellter Inhalt
    {"sub"},        //	42  höher gestellter Inhalt
    {"tt"},         //	43  Darstellung als Teletext
    {"del"},        //	44  Darstellung als gelöschter Text
    {"ins"},        //	45  Darstellung als eingefügter Text
    {"bdo"},        //	46  Laufrichtung der Schrift
    {"form"},       //	47  Behälter für ein Formular
    {"input"},      //	48  Eingabefeld
    {"select"},     //	49  Behälter für eine Auswahlliste
    {"option"},     //	50  Option einer Auswahlliste
    {"textarea"},   //	51  Eingabefeld für lange Texte
    {"button"},     //	52  Schaltfläche
    {"fieldset"},   //	53  Behälter für Formularinhalte
    {"label"},      //	54  Beschriftung eines Formularelements
    {"legend"},     //	55  Beschriftung eines Formularbereichs
    {"optgroup"},   //	56  Optionsgruppe in einer Auswahlliste
    {"caption"},    //	57  Kurzbeschreibung einer Tabelle
    {"table"},      //  58  Tabelle
    {"td"},         //  59  Tabellenzelle
    {"th"},         //  60
    {"tr"},         //  61
    {"col"},        //  62
    {"colgroup"},   //  63
    {"tbody"},      //  64
    {"thead"},      //  65
    {"tbody"},      //  66
    {"img"},        //  67
    {"area"},       //  68
    {"img"},        //  69
    {"map"},        //  70
    {"object"},     //  71
    {"param"},      //  72
    {"frameset"},   //  73
    {"frame"},      //  74
    {"noframes"},   //  75
    {"iframe"},     //  76
    {"noscript"},   //  77
    {"script"},     //  78
    {"link"},       //  79
    {"base"},       //  80
    {"meta"}        //  81
};


char vars[][20]={
{"hallo"},
{"site"},
{"abc"},
{"bla"},
{"update"}
};
char post_vars[][20]={
{"username"},
{""},
{""},
{""}
};
int vars_length=sizeof(vars)/sizeof(int)/5;
int tags_length=sizeof(tags)/sizeof(int)/5;
int post_length=sizeof(post_vars)/sizeof(int)/5;
