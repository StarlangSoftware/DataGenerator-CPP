For Developers
============
You can also see [Java](https://github.com/starlangsoftware/DataGenerator), [Python](https://github.com/starlangsoftware/DataGenerator-Py), [Cython](https://github.com/starlangsoftware/DataGenerator-Cy),  or [C#](https://github.com/starlangsoftware/DataGenerator-CS) repository.

## Requirements

* [C++ Compiler](#cpp)
* [Git](#git)


### CPP
To check if you have compatible C++ Compiler installed,
* Open CLion IDE 
* Preferences >Build,Execution,Deployment > Toolchain  

### Git

Install the [latest version of Git](https://git-scm.com/book/en/v2/Getting-Started-Installing-Git).

## Download Code

In order to work on code, create a fork from GitHub page. 
Use Git for cloning the code to your local or below line for Ubuntu:

	git clone <your-fork-git-link>

A directory called DataGenerator-CPP will be created. Or you can use below link for exploring the code:

	git clone https://github.com/starlangsoftware/DataGenerator-CPP.git

## Open project with CLion IDE

To import projects from Git with version control:

* Open CLion IDE , select Get From Version Control.

* In the Import window, click URL tab and paste github URL.

* Click open as Project.

Result: The imported project is listed in the Project Explorer view and files are loaded.


## Compile

**From IDE**

After being done with the downloading and opening project, select **Build Project** option from **Build** menu.

Detailed Description
============

+ [AnnotatedDataSetGenerator](#annotateddatasetgenerator)
+ [InstanceGenerator](#instancegenerator)

## AnnotatedDataSetGenerator

DataSet yaratmak için AnnotatedDataSetGenerator sınıfı önce üretilir.

	AnnotatedDataSetGenerator(String directory, String pattern, InstanceGenerator instanceGenerator)

Ardından generate metodu ile DataSet yaratılır.

	DataSet generate()

## InstanceGenerator

DataGeneratorlerin InstanceGeneratorlere ihtiyacı vardır. Bunlar bir tek kelimeden bir 
Instance yaratan sınıflardır.

	Instance generateInstanceFromSentence(Sentence sentence, int wordIndex)

NER problemi için NerInstanceGenerator, FeaturedNerInstanceGenerator ve 
VectorizedNerInstanceGeneratorsınıfı

ShallowParse problemi için ShallowParseInstanceGenerator, 
FeaturedShallowParseInstanceGenerator ve VectorizedShallowParseInstanceGenerator sınıfı

WSD problemi için SemanticInstanceGenerator, FeaturedSemanticInstanceGenerator ve
VectorizedSemanticInstanceGenerator sınıfı

Morphological Disambiguation problemi için FeaturedDisambiguationInstanceGenerator sınıfı
