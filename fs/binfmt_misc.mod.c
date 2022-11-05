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
	{ 0x26969d5b, "kill_litter_super" },
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0x9f64a537, "default_llseek" },
	{ 0x9d893e16, "simple_statfs" },
	{ 0xfe0f6fc8, "unregister_filesystem" },
	{ 0xd74e256d, "unregister_binfmt" },
	{ 0xdad3fd9d, "__register_binfmt" },
	{ 0xdb8ea436, "register_filesystem" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x73c9b938, "iput" },
	{ 0x80354841, "d_instantiate" },
	{ 0x3224ce2c, "simple_pin_fs" },
	{ 0x88e7257a, "current_time" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xd479a573, "new_inode" },
	{ 0xce807a25, "up_write" },
	{ 0x8ff74be7, "lookup_one_len" },
	{ 0x57bc19d2, "down_write" },
	{ 0x64bbc288, "string_unescape" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xdcb764ad, "memset" },
	{ 0x349cba85, "strchr" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x98cf60b3, "strlen" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb34f8e4d, "simple_release_fs" },
	{ 0xa95807c3, "d_drop" },
	{ 0x6963c855, "drop_nlink" },
	{ 0x40235c98, "_raw_write_unlock" },
	{ 0xe68efe41, "_raw_write_lock" },
	{ 0xa2b97dc9, "filp_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xd45137, "clear_inode" },
	{ 0xcf6c84e0, "simple_fill_super" },
	{ 0x42d0ab4c, "get_tree_single" },
	{ 0xe780fedb, "remove_arg_zero" },
	{ 0x814e762b, "dput" },
	{ 0xbc538314, "open_exec" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x99ced215, "dentry_open" },
	{ 0xf74f446c, "bprm_change_interp" },
	{ 0x882c2ac7, "copy_string_kernel" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f984513, "strrchr" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x11089ac7, "_ctype" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "82A38B7372120A634FF3181");
