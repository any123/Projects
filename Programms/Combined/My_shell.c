
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
  Function Declarations for builtin shell commands:
 */
int ankit_shell_changedir(char **args);
int ankit_shell_help(char **args);
int ankit_shell_exit(char **args);
int ankit_shell_present_working_dir(char **args);
int ankit_shell_list(char **args);
int ankit_shell_nslookup(char **args);
int ankit_shell_open(char **args);
int ankit_shell_clear(char **args);
int ankit_shell_sus(char **args);
/*
  List of builtin commands, followed by their corresponding functions.
 */
char *builtin_str[] = {
  "changedir",
  "help",
  "exit",
  "present_working_dir",
  "list",
  "nslookup",
  "open",
  "CLEAR",
  "sus"
};

int (*builtin_func[]) (char **) = {
  &ankit_shell_changedir,
  &ankit_shell_help,
  &ankit_shell_exit,
  &ankit_shell_present_working_dir,
  &ankit_shell_list,
  &ankit_shell_nslookup,
  &ankit_shell_open,
  &ankit_shell_clear,
  &ankit_shell_sus
  
};

int ankit_shell_num_builtins() {
  return sizeof(builtin_str) / sizeof(char *);
}

/*
  Builtin function implementations.
*/

/**
   @brief Bultin command: change directory.
   @param args List of args.  args[0] is "cd".  args[1] is the directory.
   @return Always returns 1, to continue executing.
 */
 
 #define PATH_MAX 5000
int ankit_shell_open(char **args)
{
  if (args[1] == NULL) {
    fprintf(stderr, "ankit_shell: expected argument to path of file to run\n");
  } else {
    
    fprintf(stdout,"%s","Here is the application u selected\n");
    char sie[1000]="";
    
    strcat(sie,"see");
    strcat(sie," ");
    strcat(sie,args[1]);
    
    fprintf(stdout,"%s",sie);
    system(sie);
  }
  return 1;
}


int ankit_shell_sus(char **args)
{
	fprintf(stdout,"%s","The system is gonna suspend after 5 seconds: \n");
	 int k=5;
	do
	{
		printf("%d seconds left\n",k);
		sleep(1);
		fflush(stdout);
	}while(k--); 
	
	char *result = malloc(400);
	
	strcpy(result,"systemctl suspend");
	
	system(result);
	return 1;
}
int ankit_shell_clear(char **args)
{
	
	if(args[0]!='\0')
	{
		fprintf(stdout,"%s","CLEAN AFTER WAITING FOR 5 SEC !!!\n");
				sleep(5);
		
		system("clear");
	}
	return 1;
}


int ankit_shell_changedir(char **args)
{
	if (args[1] == NULL) {
    fprintf(stderr, "ankit_shell: expected argument to path of directory \n");
  } else {
    if (chdir(args[1]) != 0) {
      perror("The error is\n");
    }
  }
  
  return 1;
}

int ankit_shell_list(char **args)
{
  if (args[0] != '\0') {
      perror("The list of Files and Dircetory retriving status is: \n");
     FILE *fp;
	char path[PATH_MAX];


	fp = popen("ls", "r");

		if (fp==NULL) {
    fprintf(stderr, "Ankit: allocation error\n");
    exit(EXIT_FAILURE);
  }


while (fgets(path, PATH_MAX, fp) != NULL)
    fprintf(stdout, path);
	
	}
    
 return 1;
 
}

int ankit_shell_nslookup(char **args)
{
  if (args[1] != '\0') {
      perror("The ip address retireving status is: \n");
     
      
     FILE *fp;
	
	char path[PATH_MAX];

		char *result = malloc(strlen(args[0])+strlen(args[1])+1);//+1 for the zero-terminator
    strcpy(result,args[0]);
    strcat(result," ");
    strcat(result, args[1]);
		

	
	fp = popen(result, "r");

		if (fp==NULL) {
    fprintf(stderr, "Ankit: allocation error\n");
    exit(EXIT_FAILURE);
  }

static char buff[1024];
    size_t n;

    while ((n = fread(buff, 1, sizeof(buff)-1, fp)) > 0) {
        buff[n] = '\0';
        printf("%s", buff);
    }
    
    
   // fprintf(stdout,"%d",strlen(buff));   printing the output in the form of a string
     
    
	for(int i=0;i<strlen(buff);i++)
	{
			if(buff[i]=='#')
			{
				char *simple=malloc(strlen(buff)+1);
				strcpy(simple,"The port no. is ");
				fprintf(stdout,"%s" "%c%c",simple,buff[i+1],buff[i+2]);
				
				
			}
			
			
			if(buff[i]=='w' && buff[i+1]=='w')
			{
				char *simple=malloc(strlen(buff)+1);
				strcpy(simple,"\nThe domain name  is ");
				
				fprintf(stdout,"%s",simple);
				for(int j=i;buff[j]!='A';j++)
				fprintf(stdout,"%c",buff[j]);
				fprintf(stdout,"%s","\n");
				break;
			}
			
	}
	
	}
	 else
      fprintf(stdout,"Please enter a domain name along with nslookup to get its ip\n");
	
    
 return 1;
 
}

/**
   @brief Builtin command: print help.
   @param args List of args.  Not examined.
   @return Always returns 1, to continue executing.
 */
int ankit_shell_help(char **args)
{
  int i;
  printf("Welcome to Ankit_shell\n");
  printf("Type program names and arguments, and hit enter.\n");
  printf("The following are built in:\n");

  for (i = 0; i < ankit_shell_num_builtins(); i++) {
    printf("  %s\n", builtin_str[i]);
  }

  printf("Use the man command for information on other programs.\n");
  return 1;
}

/**
   @brief Builtin command: exit.
   @param args List of args.  Not examined.
   @return Always returns 0, to terminate execution.
 */
int ankit_shell_exit(char **args)
{
	fprintf(stdout,"%s","Bye!!! see you soon :)\n");
	if(args[0]!='\0')
	exit(1);
	
  return 0;
}

int ankit_shell_present_working_dir(char **args)
{
  if (getwd(args[0]) != 0) {
      perror("The dircetory retriving status is: \n");
      fprintf(stdout,"\n The present working directory is:\n");
      fprintf(stdout,getwd(args[0]));
	}
    
 return 1;
}

/**
  @brief Launch a program and wait for it to terminate.
  @param args Null terminated list of arguments (including program).
  @return Always returns 1, to continue execution.
 */
int ankit_shell_launch(char **args)
{
  pid_t pid;
  int status;

  pid = fork();
  if (pid == 0) {
    // Child process
    if (execvp(args[0], args) == -1) {
      perror("ankit_shell");
    }
    exit(EXIT_FAILURE);
  } else if (pid < 0) {
    // Error forking
    perror("ankit_shell");
  } else {
    // Parent process
    do {
		pid_t wpid;
      wpid = waitpid(pid, &status, WUNTRACED);
      
    } while (!WIFEXITED(status) && !WIFSIGNALED(status));
  }

  return 1;
}

/**
   @brief Execute shell built-in or launch program.
   @param args Null terminated list of arguments.
   @return 1 if the shell should continue running, 0 if it should terminate
 */
int ankit_shell_execute(char **args)
{
  int i;

  if (args[0] == NULL) {
    // An empty command was entered.
    return 1;
  }

  for (i = 0; i < ankit_shell_num_builtins(); i++) {
    if (strcmp(args[0], builtin_str[i]) == 0) {
      return (*builtin_func[i])(args);
    }
  }

  return ankit_shell_launch(args);
}

#define ankit_shell_RL_BUFSIZE 1024
/**
   @brief Read a line of input from stdin.
   @return The line from stdin.
 */
char *ankit_shell_read_line(void)
{
  int bufsize = ankit_shell_RL_BUFSIZE;
  int position = 0;
  char *buffer = malloc(sizeof(char) * bufsize);
  int c;

  if (!buffer) {
    fprintf(stderr, "ankit_shell: allocation error\n");
    exit(EXIT_FAILURE);
  }

  while (1) {
    // Read a character
    c = getchar();

    // If we hit EOF, replace it with a null character and return.
    if (c == EOF || c == '\n') {
      buffer[position] = '\0';
      return buffer;
    } else {
      buffer[position] = c;
    }
    position++;

    // If we have exceeded the buffer, reallocate.
    if (position >= bufsize) {
      bufsize += ankit_shell_RL_BUFSIZE;
      buffer = realloc(buffer, bufsize);
      if (!buffer) {
        fprintf(stderr, "ankit_shell: allocation error\n");
        exit(EXIT_FAILURE);
      }
    }
  }
}

#define ankit_shell_TOK_BUFSIZE 64
#define ankit_shell_TOK_DELIM " \t\r\n\a"
/**
   @brief Split a line into tokens (very naively).
   @param line The line.
   @return Null-terminated array of tokens.
 */
char **ankit_shell_split_line(char *line)
{
  int bufsize = ankit_shell_TOK_BUFSIZE, position = 0;
  char **tokens = malloc(bufsize * sizeof(char*));
  char *token;

  if (!tokens) {
    fprintf(stderr, "ankit_shell: allocation error\n");
    exit(EXIT_FAILURE);
  }

  token = strtok(line, ankit_shell_TOK_DELIM);
  while (token != NULL) {
    tokens[position] = token;
    position++;

    if (position >= bufsize) {
      bufsize += ankit_shell_TOK_BUFSIZE;
      tokens = realloc(tokens, bufsize * sizeof(char*));
      if (!tokens) {
        fprintf(stderr, "ankit_shell: allocation error\n");
        exit(EXIT_FAILURE);
      }
    }

    token = strtok(NULL, ankit_shell_TOK_DELIM);
  }
  tokens[position] = NULL;
  return tokens;
}

/**
   @brief Loop getting input and executing it.
 */
void ankit_shell_loop(void)
{
  char *line;
  char **args;
  int status;

  do {
    printf("> ");
    line = ankit_shell_read_line();
    args = ankit_shell_split_line(line);
    status = ankit_shell_execute(args);

    free(line);
    free(args);
  } while (status);
}

/**
   @brief Main entry point.
   @param argc Argument count.
   @param argv Argument vector.
   @return status code
 */
int main(int argc, char **argv)
{
	printf("Welcome to Ankit_shell\n");
  printf("Type program names and arguments, and hit enter.\n");
  printf("The following are built in:\n");
  
  for (int i = 0; i < ankit_shell_num_builtins(); i++) {
    printf("  %s\n", builtin_str[i]);
  }
  printf("%c",'\n');
  // Load config files, if any.
	
	char *temp=malloc(100);
	strcpy(temp,"exec bash");
	
	system(temp);

  // Run command loop.
  ankit_shell_loop();

  // Perform any shutdown/cleanup.
	

  return EXIT_SUCCESS;
}

