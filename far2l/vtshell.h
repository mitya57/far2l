#pragma once

int VTShell_Execute(const char *cmd, int (WINAPI *fork_proc)(int argc, const char *const argv[]) );
