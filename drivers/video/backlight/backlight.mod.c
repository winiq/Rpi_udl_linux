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
	{ 0xdd0d3a1f, "class_find_device" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x80d68d3e, "fb_register_client" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0x9fc068b0, "device_match_name" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4ece3615, "blocking_notifier_chain_unregister" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7392091d, "device_register" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x93c1e1f1, "__devres_alloc_node" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9d6bb9e2, "kobject_uevent_env" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0x251799b9, "devres_release" },
	{ 0x81822a88, "put_device" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x92997ed8, "_printk" },
	{ 0x5b0600d, "sysfs_notify" },
	{ 0x907d14d, "blocking_notifier_chain_register" },
	{ 0x7ba780fd, "devres_add" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x265fe5e, "class_destroy" },
	{ 0xb12cbacb, "fb_unregister_client" },
	{ 0xdcdcb000, "device_unregister" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0xbad97937, "__class_create" },
	{ 0x7b4da6ff, "__init_rwsem" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CDE4064E41BC20AF24F53FC");
