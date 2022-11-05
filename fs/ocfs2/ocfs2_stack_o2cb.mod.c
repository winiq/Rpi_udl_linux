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
	{ 0xf9a482f9, "msleep" },
	{ 0x4bf26b62, "dlmunlock" },
	{ 0x7a1211f8, "dlm_setup_eviction_cb" },
	{ 0x1b89c6ee, "o2hb_fill_node_map" },
	{ 0x33f2034d, "dlm_register_eviction_cb" },
	{ 0xae94eaaa, "dlm_register_domain" },
	{ 0x3c4fa8bd, "dlm_unregister_domain" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xbfd7d7a2, "o2hb_global_heartbeat_active" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xd8fa57a6, "dlm_unregister_eviction_cb" },
	{ 0xd16e7e52, "ocfs2_stack_glue_unregister" },
	{ 0xd859ac8c, "o2net_fill_node_map" },
	{ 0xf327f1d2, "ocfs2_stack_glue_register" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92997ed8, "_printk" },
	{ 0x5bad24ba, "dlmlock" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6ebf62a, "o2nm_this_node" },
	{ 0x59a31715, "dlm_print_one_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "ocfs2_dlm,ocfs2_nodemanager,ocfs2_stackglue");


MODULE_INFO(srcversion, "80674EC32EDBE9DB4F32E7E");
