#ifndef diff_h
#define diff_h

// char* diff_last_modified(const char* file);
void version(void);
void todo_list(void);
void loadfiles(const char* filename1, const char* filename2);
void print_option(const char* name, int value);
void diff_output_conflict_error(void);
void setoption(const char* arg, const char* s, const char* t, int* value);
void showoptions(const char* file1, const char* file2);
void briefcommand(const char* file1, const char* file2);
void check_identical(const char* file1, const char* file2);
// char* printboth(const char* file1, const char* file2);
void init_options_files(int argc, const char* argv[]) ;

#endif
