#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6963c855, "drop_nlink" },
	{ 0x7410aba2, "strreplace" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x9df95340, "efivar_entry_delete" },
	{ 0x98cf60b3, "strlen" },
	{ 0x42d0ab4c, "get_tree_single" },
	{ 0x465e24ff, "ucs2_utf8size" },
	{ 0xfb8167f8, "simple_lookup" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x1f1b7926, "generic_delete_inode" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x814e762b, "dput" },
	{ 0x2cf13a2, "inc_nlink" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x8caf9305, "uuid_is_valid" },
	{ 0x9021564e, "d_add" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x35eb6dac, "d_delete" },
	{ 0x26969d5b, "kill_litter_super" },
	{ 0x11089ac7, "_ctype" },
	{ 0x89346eaa, "efivar_entry_remove" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x45a01228, "efivar_entry_size" },
	{ 0xad5737fc, "efivar_init" },
	{ 0x1de95874, "simple_open" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x7b259b67, "efivar_entry_set_get_size" },
	{ 0xdd18cf86, "simple_dir_operations" },
	{ 0x64e5214a, "d_alloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd8480b5e, "efivar_entry_get" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd93a5cb1, "efivar_variable_is_removable" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xdb8ea436, "register_filesystem" },
	{ 0x9c86b9ab, "fileattr_fill_flags" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x73c9b938, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd10e32fb, "efivar_entry_add" },
	{ 0x88e7257a, "current_time" },
	{ 0xd44b13cb, "always_delete_dentry" },
	{ 0x184b2ba0, "d_make_root" },
	{ 0x9d893e16, "simple_statfs" },
	{ 0xc6645fe1, "inode_set_flags" },
	{ 0xfe0f6fc8, "unregister_filesystem" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xd479a573, "new_inode" },
	{ 0x4941509c, "__efivar_entry_iter" },
	{ 0xd45137, "clear_inode" },
	{ 0x18615d35, "efivar_supports_writes" },
	{ 0x80354841, "d_instantiate" },
	{ 0x5a7215a8, "efivars_kobject" },
	{ 0x4336fcca, "ucs2_as_utf8" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A1F5A8AB11193A60F24488F");
