#define _LIBINTL_H
#include <gtk/gtk.h>
#include <slapt.h>
#define RC_LOCATION "/etc/slapt-get/slapt-getrc"

void on_gslapt_destroy (GtkObject *object, gpointer user_data);
void update_callback (GtkObject *object, gpointer user_data);
void upgrade_callback (GtkObject *object, gpointer user_data);
void distupgrade_callback (GtkObject *object, gpointer user_data);
void execute_callback (GtkObject *object, gpointer user_data);
void open_preferences (GtkMenuItem *menuitem, gpointer user_data);
void on_search_tab_search_button_clicked (GtkWidget *gslapt, gpointer user_data);
void add_pkg_for_install (GtkWidget *gslapt, gpointer user_data);
void add_pkg_for_removal (GtkWidget *gslapt, gpointer user_data);
void add_pkg_for_exclude (GtkWidget *gslapt, gpointer user_data);
void build_installed_treeviewlist(GtkWidget *);
void build_available_treeviewlist(GtkWidget *);
void build_searched_treeviewlist(GtkWidget *,gchar *pattern);
void open_about (GtkObject *object, gpointer user_data);

void show_pkg_details (GtkTreeSelection *selection, gpointer data);
void fillin_pkg_details(pkg_info_t *pkg);
void clear_treeview(GtkTreeView *treeview);

int ldownload_data(FILE *,const char *);
int lget_mirror_data_from_source(FILE *,const char *,const char *);
void get_package_data(void);
void rebuild_treeviews(void);
guint gslapt_set_status(const gchar *);
void gslapt_clear_status(guint context_id);
void lock_toolbar_buttons(void);
void unlock_toolbar_buttons(void);

void preferences_sources_add(GtkWidget *w, gpointer user_data);
void preferences_sources_remove(GtkWidget *w, gpointer user_data);
void preferences_on_ok_clicked(GtkWidget *w, gpointer user_data);

void on_transaction_okbutton1_clicked(GtkWidget *w, gpointer user_data);
void preferences_exclude_add(GtkWidget *w, gpointer user_data);
void preferences_exclude_remove(GtkWidget *w, gpointer user_data);

void build_sources_treeviewlist(GtkWidget *treeview, const rc_config *global_config);
void build_exclude_treeviewlist(GtkWidget *treeview, const rc_config *global_config);

void populate_transaction_window(GtkWidget *trans_window);


void on_search_tab_clear_button_clicked(GtkWidget *button,gpointer user_data);
void build_upgrade_list(void);

gboolean download_packages(void);
int gtk_progress_callback(void *data, double dltotal, double dlnow, double ultotal, double ulnow);
void clean_callback(GtkMenuItem *menuitem, gpointer user_data);
gboolean install_packages(void);
void build_package_treeviewlist(GtkWidget *treeview);
static gboolean write_preferences(void);

