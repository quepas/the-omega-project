/* $Id: depend_rel.h,v 1.1.1.1 2000/06/29 19:24:40 dwonnaco Exp $ */
#ifndef Already_Included_Depend_Rel
#define Already_Included_Depend_Rel

#include <omega/Relations.h>
#include <uniform/uniform_misc.h>

int build_depend_relation_graph(void);

void close_constraints(depend_graph &temp);

void calculate_constraints(depend_graph &temp);

void copy_depends_graph(depend_graph &from, depend_graph &to);

void copy_depends_graph2(depend_graph &from, depend_graph &to);

void create_relation_from_dd(Relation &result, Depend *dd);

void dump_graph(depend_graph &graph, FILE *f);

#endif
