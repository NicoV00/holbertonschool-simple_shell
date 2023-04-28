#include "main.h"
 
/*
 *  * function that executes a command.
 *   * @command: The pointer to tokienized command
 *    * @name: The name of the shell.
 *     * @env: The pointer to the enviromental variables.
 *      * @cicles: Number of executed cicles.
 *       * Return: Nothing.
 *        */
void execute(char **command, char *name, char **env, int cicles)
{
