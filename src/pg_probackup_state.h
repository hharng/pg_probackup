/*-------------------------------------------------------------------------
 *
 * pg_probackup_state.h: Definitions of internal pg_probackup states 
 *
 * Portions Copyright (c) 2021, Postgres Professional
 *
 *-------------------------------------------------------------------------
 */
#ifndef PG_PROBACKUP_STATE_H
#define PG_PROBACKUP_STATE_H

/* ====== CatalogState ======= */

typedef struct CatalogState
{
	/* $BACKUP_DIR */
	char		catalog_path[MAXPGPATH]; //previously global var backup_path
	/* $BACKUP_DIR/backups */
	char		backup_subdir_path[MAXPGPATH];
	/* $BACKUP_DIR/wal */
	char		wal_subdir_path[MAXPGPATH]; // previously global var arclog_path
} CatalogState; 

/* ====== CatalogState (END) ======= */


/* ===== instanceState ===== */

/* ===== instanceState (END) ===== */

#endif /* PG_PROBACKUP_STATE_H */
