# '12_Search_in_a_text_editor.1_About_the_exam/Проза'
import glob
my_path = '12.1\Проза'
files = glob.glob(my_path + '/**/*.txt', recursive=True)
print(files)
print(len(files))